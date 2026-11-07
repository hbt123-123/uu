// rea decompile_all
// name: FUN_100349814
// address: 0x100349814
// body: available
// range: 0x100349814-0x10034993f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100349814(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_68 [40];
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar1 = param_2;
    uVar4 = param_3;
    FUN_1001a2c70(param_2);
    if ((uVar4 & 1) != 0) {
      FUN_1000b142c(*(long *)(lVar5 + 0x38) + lVar1 * 0x28,auStack_68);
      _swift_bridgeObjectRelease(lVar5);
      FUN_1000a0074(auStack_68,param_1);
      return;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    uVar2 = 0;
    FUN_100277ad0(0);
    plVar3 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar2,plVar3,0,0);
    *plVar3 = param_2;
    plVar3[1] = param_3;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[2] = 0;
    *(undefined1 *)(plVar3 + 5) = 0;
    _swift_storeEnumTagMultiPayload(plVar3,uVar2,0xb);
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

