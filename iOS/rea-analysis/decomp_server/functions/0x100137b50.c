// rea decompile_all
// name: FUN_100137b50
// address: 0x100137b50
// body: available
// range: 0x100137b50-0x100137d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100137b50(long param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    puVar1 = (undefined8 *)(param_1 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockKey)
    ;
    uVar6 = puVar1[1];
    *puVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar6);
    piVar2 = (int *)(param_1 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockCount);
    *piVar2 = *(int *)(param_2 + 0x20);
    *(undefined1 *)(piVar2 + 1) = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = param_1;
    FUN_1003fb45c(FUN_100139c0c,auStack_a0,0xd0000000000000b1,0x80000001008900b0,0xd00000000000001b,
                  0x8000000100890450,0x5c,7);
    lVar5 = _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList;
    if ((*(byte *)(piVar2 + 1) & 1) == 0) {
      iVar4 = *piVar2;
      _swift_beginAccess(param_1 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList,
                         auStack_80,0,0);
      if (*(long *)(*(long *)(param_1 + lVar5) + 0x10) == (long)iVar4) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_90 = param_1;
        FUN_1003fb45c(FUN_100139c14,auStack_a0,0xd0000000000000b1,0x80000001008900b0,
                      0xd00000000000001b,0x8000000100890450,0x5f,7);
        FUN_100138980();
      }
    }
    FUN_10061630c();
  }
  return;
}

