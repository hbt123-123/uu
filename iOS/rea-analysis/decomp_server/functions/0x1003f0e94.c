// rea decompile_all
// name: FUN_1003f0e94
// address: 0x1003f0e94
// body: available
// range: 0x1003f0e94-0x1003f0fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f0e94(long *param_1,code *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar3 = *(long *)(*param_1 + 0x50);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_100616300(0,lVar3);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(puVar5 + -extraout_x8_00);
  (*param_2)(puVar6);
  puVar2 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar1);
  if ((int)puVar2 == 1) {
    uVar4 = *puVar6;
    FUN_100616260(uVar4);
    _swift_errorRelease(uVar4);
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar5,puVar6,lVar3);
    FUN_10061630c(puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar3);
  }
  return;
}

