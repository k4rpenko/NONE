import { Routes } from '@angular/router';
import { NonExistentUserComponent } from './content/Non-existent-user/non-existent-user.component';
import { LoginComponent } from './pages/login/login.component';
import { PostsComponent } from './pages/posts/posts.component';
import { LoginComponent } from './pages/login/login.component';
import { MessageComponent } from './pages/message/message.component';

export const routes: Routes = [
    { path: '', component: LoginComponent },
    { path: 'home', component: PostsComponent },
    { path: 'message', component: MessageComponent },
    { path: ':username', component: NonExistentUserComponent },
    { path: '**', component: NonExistentUserComponent } 
];
