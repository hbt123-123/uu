// rea decompile_all
// name: FUN_10034aa18
// address: 0x10034aa18
// body: available
// range: 0x10034aa18-0x10034ac5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10034aa18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long unaff_x21;
  ulong uVar6;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar6 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar6 & 0xffffffffffffff8;
    if ((long)uVar6 < 0) {
      uVar1 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar1 == 0) {
    uVar4 = 0;
    FUN_100277ad0();
    puVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar4,puVar5,0,0);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 5) = 10;
  }
  else {
    if ((*(char *)(unaff_x20 + 0x18) == '\x01') && (FUN_10034ac5c(uVar6,param_1), unaff_x21 != 0)) {
      return;
    }
    if ((*(char *)(unaff_x20 + 0x19) == '\x01') &&
       (FUN_100349c44(param_2,param_3,param_1), unaff_x21 != 0)) {
      return;
    }
    if ((*(char *)(unaff_x20 + 0x1a) == '\x01') &&
       (FUN_100349a18(param_2,param_3,param_1), unaff_x21 != 0)) {
      return;
    }
    uVar2 = param_1;
    FUN_10034b05c(param_1);
    uVar4 = uVar2;
    FUN_10034ad68();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uVar4;
    FUN_10034fb18(uVar4);
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = uVar6;
    _swift_bridgeObjectRetain();
    FUN_10034ad68();
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = uVar1;
    FUN_10034fb18();
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = uVar3;
    FUN_10034af14(uVar3,uVar2);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar2);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar4 = 0;
    FUN_100277ad0(0);
    puVar5 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar4,puVar5,0,0);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(param_3);
    uVar2 = param_1;
    FUN_10034b05c();
    *puVar5 = param_2;
    puVar5[1] = param_3;
    puVar5[2] = param_1;
    puVar5[3] = uVar6;
    puVar5[4] = uVar2;
    *(undefined1 *)(puVar5 + 5) = 7;
  }
  _swift_storeEnumTagMultiPayload(puVar5,uVar4,0xb);
  _swift_willThrow();
  return;
}

