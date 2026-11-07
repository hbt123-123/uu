// rea decompile_all
// name: FUN_10034b670
// address: 0x10034b670
// body: available
// range: 0x10034b670-0x10034b84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10034b670(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar5 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar5 & 0xffffffffffffff8;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar1 == 0) {
    uVar2 = 0;
    FUN_100277ad0();
    puVar4 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar2,puVar4,0,0);
    *puVar4 = 1;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 5) = 10;
  }
  else {
    if ((*(char *)(unaff_x20 + 0x18) == '\x01') &&
       (FUN_100349c44(param_2,param_3,param_1), unaff_x21 != 0)) {
      return;
    }
    if ((*(char *)(unaff_x20 + 0x19) == '\x01') &&
       (FUN_100349a18(param_2,param_3,param_1), unaff_x21 != 0)) {
      return;
    }
    uVar1 = param_1;
    FUN_10034b850();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 0;
    FUN_100277ad0(0);
    puVar4 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar2,puVar4,0,0);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = param_1;
    FUN_10034b05c();
    uVar3 = uVar1;
    FUN_10034c39c();
    _swift_bridgeObjectRelease(uVar1);
    *puVar4 = param_2;
    puVar4[1] = param_3;
    puVar4[2] = param_1;
    puVar4[3] = uVar5;
    puVar4[4] = uVar3;
    *(undefined1 *)(puVar4 + 5) = 8;
  }
  _swift_storeEnumTagMultiPayload(puVar4,uVar2,0xb);
  _swift_willThrow();
  return;
}

