// rea decompile_all
// name: FUN_1000b4904
// address: 0x1000b4904
// body: available
// range: 0x1000b4904-0x1000b4ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b4904(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 local_54 [4];
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  _CGSessionCopyCurrentDictionary();
  if (param_1 == 0) {
    return;
  }
  _swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___NSDictionary);
  puVar1 = PTR___sypN_100995e88;
  if (param_1 == 0) {
    return;
  }
  local_50 = 0;
  __sSD10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo12NSDictionaryC_SDyxq_GSgztFZ();
  lVar2 = local_50;
  if (local_50 == 0) {
    return;
  }
  if (*(long *)(local_50 + 0x10) == 0) {
LAB_1000b4a08:
    lVar5 = *(long *)(lVar2 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(local_50);
    lVar5 = -0x2fffffffffffffea;
    uVar4 = 0;
    FUN_1001a2c70(0xd000000000000016);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar2);
      goto LAB_1000b4a08;
    }
    FUN_10003e8bc(*(long *)(lVar2 + 0x38) + lVar5 * 0x20,&local_50);
    _swift_bridgeObjectRelease(lVar2);
    puVar3 = local_54;
    _swift_dynamicCast(puVar3,&local_50,puVar1 + 8,PTR___sSbN_1009958c8,6);
    if (((ulong)puVar3 & 1) == 0) goto LAB_1000b4a08;
    lVar5 = *(long *)(lVar2 + 0x10);
  }
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar2);
    uVar4 = 0;
    lVar5 = -0x2fffffffffffffec;
    FUN_1001a2c70(0xd000000000000014);
    if ((uVar4 & 1) != 0) {
      FUN_10003e8bc(*(long *)(lVar2 + 0x38) + lVar5 * 0x20,&local_50);
      _swift_bridgeObjectRelease(lVar2);
      goto LAB_1000b4a68;
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
LAB_1000b4a68:
  _swift_bridgeObjectRelease(lVar2);
  if (local_38 == 0) {
    FUN_100040bb4(&local_50,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    _swift_dynamicCast(local_54,&local_50,puVar1 + 8,PTR___ss6UInt32VN_100995dc0,6);
  }
  return;
}

