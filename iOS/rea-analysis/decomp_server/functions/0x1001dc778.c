// rea decompile_all
// name: FUN_1001dc778
// address: 0x1001dc778
// body: available
// range: 0x1001dc778-0x1001dc8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001dc778(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_68;
  undefined1 auStack_60 [32];
  
  uVar5 = 0xed0000736d5f7461;
  lVar6 = 0x5f64657461657263;
  lVar3 = *param_1;
  lVar4 = *param_2;
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1001dc834:
    lVar7 = 0;
    lVar3 = 0;
    if (*(long *)(lVar4 + 0x10) == 0) goto LAB_1001dc8b0;
  }
  else {
    _swift_bridgeObjectRetain(lVar3);
    lVar7 = lVar6;
    uVar2 = uVar5;
    FUN_1001a2c70(0x5f64657461657263);
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar3);
      goto LAB_1001dc834;
    }
    FUN_10003e8bc(*(long *)(lVar3 + 0x38) + lVar7 * 0x20,auStack_60);
    _swift_bridgeObjectRelease(lVar3);
    plVar1 = &local_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6);
    if (((ulong)plVar1 & 1) == 0) goto LAB_1001dc834;
    lVar7 = local_68;
    if (*(long *)(lVar4 + 0x10) == 0) {
      lVar3 = 0;
      goto LAB_1001dc8b0;
    }
  }
  _swift_bridgeObjectRetain(lVar4);
  FUN_1001a2c70(0x5f64657461657263);
  if ((uVar5 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar4);
  }
  else {
    FUN_10003e8bc(*(long *)(lVar4 + 0x38) + lVar6 * 0x20,auStack_60);
    _swift_bridgeObjectRelease(lVar4);
    plVar1 = &local_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6);
    lVar3 = local_68;
    if (((ulong)plVar1 & 1) != 0) goto LAB_1001dc8b0;
  }
  lVar3 = 0;
LAB_1001dc8b0:
  return lVar3 < lVar7;
}

