// rea decompile_all
// name: FUN_100138184
// address: 0x100138184
// body: available
// range: 0x100138184-0x1001382af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100138184(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList,
                       auStack_90,0x21,0);
    uVar5 = *(ulong *)(param_1 + lVar1);
    uVar2 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + lVar1) = uVar5;
    uVar3 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1000362e0(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      *(ulong *)(param_1 + lVar1) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1000362e0(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar4 = uVar5 + uVar2 * 0x38;
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar11 = param_2[5];
    uVar10 = param_2[4];
    *(undefined8 *)(lVar4 + 0x50) = param_2[6];
    *(undefined8 *)(lVar4 + 0x38) = uVar9;
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(undefined8 *)(lVar4 + 0x48) = uVar11;
    *(undefined8 *)(lVar4 + 0x40) = uVar10;
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(ulong *)(param_1 + lVar1) = uVar5;
    _swift_endAccess(auStack_90);
    FUN_100139d10(param_2,auStack_90);
    FUN_1001382b0(param_2);
  }
  return;
}

