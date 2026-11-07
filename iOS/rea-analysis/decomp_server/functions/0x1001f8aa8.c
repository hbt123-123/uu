// rea decompile_all
// name: FUN_1001f8aa8
// address: 0x1001f8aa8
// body: available
// range: 0x1001f8aa8-0x1001f8ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f8cc8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f8aa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uid_t uVar2;
  undefined4 extraout_var;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_88;
  char *pcStack_80;
  char *local_58;
  undefined8 uStack_50;
  long local_48;
  ulong uVar3;
  long lVar4;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
  _sigemptyset((sigset_t *)&local_88);
  uVar1 = _sigprocmask(3,(sigset_t *)&local_88,(sigset_t *)0x0);
  uVar3 = (ulong)uVar1;
  __s6Darwin7SIG_DFLys5Int32VXCSgvg();
  _signal(0x1c,uVar3);
  FUN_1001f8740(param_5);
  _umask(0x12);
  _setenv("TERM","xterm-256color",1);
  pcVar6 = "en_US.UTF-8";
  _setenv("LANG","en_US.UTF-8",1);
  uVar2 = _getuid();
  lVar4 = CONCAT44(extraout_var,uVar2);
  _getpwuid();
  if ((lVar4 != 0) && (pcVar7 = *(char **)(lVar4 + 0x30), pcVar7 != (char *)0x0)) {
    pcVar6 = pcVar7;
    _setenv("HOME",pcVar7,1);
    _chdir(pcVar7);
  }
  pcVar7 = _getenv("PATH");
  if (pcVar7 == (char *)0x0) {
    _setenv("PATH","/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin",1);
  }
  else {
    __sSS7cStringSSSPys4Int8VG_tcfC();
    local_88 = pcVar7;
    pcStack_80 = pcVar6;
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    __sSS6appendyySSF(0xd00000000000002c,0x80000001008a0630);
    pcVar6 = pcStack_80;
    pcVar7 = local_88;
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_88,pcStack_80);
    _swift_bridgeObjectRelease(pcVar6);
    _setenv("PATH",pcVar7 + 0x20,1);
    _swift_release(pcVar7);
  }
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
  pcVar5 = _strdup((char *)(param_1 + 0x20));
  _swift_release(param_1);
  local_88 = (char *)0x2d;
  pcStack_80 = (char *)0xe100000000000000;
  __sSS6appendyySSF(param_3,param_4);
  pcVar6 = pcStack_80;
  pcVar7 = local_88;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_88,pcStack_80);
  _swift_bridgeObjectRelease(pcVar6);
  pcVar6 = _strdup(pcVar7 + 0x20);
  _swift_release(pcVar7);
  uStack_50 = 0;
  local_58 = pcVar6;
  _execvp(pcVar5,&local_58);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

