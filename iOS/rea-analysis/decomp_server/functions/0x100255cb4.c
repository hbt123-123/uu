// rea decompile_all
// name: thunk_FUN_100255b6c
// address: 0x100255cb4
// body: available
// range: 0x100255cb4-0x100255cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100255b6c(long param_1)

{
  uint uVar1;
  long lVar3;
  __sigaction_u *p_Var5;
  long lVar6;
  __sigaction_u _Var7;
  __sigaction_u _Var8;
  sigset_t sStack_64;
  __sigaction_u _Stack_60;
  __sigaction_u _Stack_58;
  long lStack_48;
  int iVar2;
  ulong uVar4;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100a7fe98 != -1) {
    _swift_once(&DAT_100a7fe98,FUN_10025531c);
  }
  lVar6 = DAT_100b363f8;
  p_Var5 = &_Stack_60;
  _swift_beginAccess(DAT_100b363f8 + 0x30,p_Var5,0x20,0);
  lVar6 = *(long *)(lVar6 + 0x30);
  if ((*(long *)(lVar6 + 0x10) == 0) || (lVar3 = param_1, FUN_10025a4ec(), ((ulong)p_Var5 & 1) == 0)
     ) {
    _swift_endAccess(&_Stack_60);
    _Stack_60.__sa_handler = (_func_333 *)0x0;
    _Stack_58.__sa_handler = (_func_333 *)0x0;
  }
  else {
    p_Var5 = (__sigaction_u *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x10);
    _Var7 = *p_Var5;
    _Var8 = p_Var5[1];
    _swift_endAccess(&_Stack_60);
    _Stack_60 = _Var7;
    _Stack_58 = _Var8;
  }
  iVar2 = (int)param_1;
  uVar1 = _sigaction(iVar2,(sigaction *)&_Stack_60,(sigaction *)0x0);
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0) {
    __s6Darwin7SIG_DFLys5Int32VXCSgvg();
    _signal(param_1,uVar4);
  }
  sStack_64 = 0;
  _sigemptyset(&sStack_64);
  _sigaddset(&sStack_64,iVar2);
  _sigprocmask(2,&sStack_64,(sigset_t *)0x0);
  FUN_1002559b0();
  _raise(iVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

