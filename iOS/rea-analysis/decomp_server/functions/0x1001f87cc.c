// rea decompile_all
// name: FUN_1001f87cc
// address: 0x1001f87cc
// body: available
// range: 0x1001f87cc-0x1001f8aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f8aa4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f87cc(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  uid_t uVar3;
  undefined4 extraout_var;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *local_60;
  long local_58;
  ulong uVar4;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  _sigemptyset((sigset_t *)&local_60);
  uVar2 = _sigprocmask(3,(sigset_t *)&local_60,(sigset_t *)0x0);
  uVar4 = (ulong)uVar2;
  __s6Darwin7SIG_DFLys5Int32VXCSgvg();
  _signal(0x1c,uVar4);
  FUN_1001f8740(param_6);
  _umask(0x12);
  lVar10 = *(long *)(param_1 + 0x50);
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar10,*(undefined8 *)(param_1 + 0x58));
  _setenv("TERMINFO",(char *)(lVar10 + 0x20),1);
  _swift_release(lVar10);
  _setenv("TERM","tmux-256color",1);
  _setenv("LANG","en_US.UTF-8",1);
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_4,param_5);
  _setenv("SHELL",(char *)(param_4 + 0x20),1);
  _swift_release(param_4);
  uVar3 = _getuid();
  lVar10 = CONCAT44(extraout_var,uVar3);
  _getpwuid();
  if ((lVar10 != 0) && (pcVar9 = *(char **)(lVar10 + 0x30), pcVar9 != (char *)0x0)) {
    _setenv("HOME",pcVar9,1);
    _chdir(pcVar9);
  }
  _setenv("PATH","/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin",1);
  FUN_1000aa99c(param_2,param_3);
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(param_2);
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_60 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fe88(0,lVar10,0);
    puVar11 = (undefined8 *)(param_2 + 0x28);
    do {
      puVar8 = local_60;
      lVar5 = puVar11[-1];
      uVar1 = *puVar11;
      __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar5,uVar1);
      _swift_bridgeObjectRetain(uVar1);
      pcVar9 = _strdup((char *)(lVar5 + 0x20));
      _swift_bridgeObjectRelease(uVar1);
      _swift_release(lVar5);
      uVar4 = *(ulong *)(puVar8 + 0x10);
      local_60 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
        FUN_10006fe88(1 < *(ulong *)(puVar8 + 0x18),uVar4 + 1,1);
      }
      puVar8 = local_60;
      *(ulong *)(local_60 + 0x10) = uVar4 + 1;
      *(char **)(local_60 + uVar4 * 8 + 0x20) = pcVar9;
      puVar11 = puVar11 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(param_2);
  }
  puVar6 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar8;
  if (((ulong)puVar6 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_100035e70(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
  }
  uVar4 = *(ulong *)(puVar7 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_100035e70(puVar8,uVar4 + 1,1,puVar7);
  }
  *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
  *(char **)((long)(puVar8 + 0x20) + uVar4 * 8) = (char *)0x0;
  _execv(*(char **)(puVar8 + 0x20),(char **)(puVar8 + 0x20));
  _swift_bridgeObjectRelease(puVar8);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

