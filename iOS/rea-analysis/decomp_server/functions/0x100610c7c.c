// rea decompile_all
// name: FUN_100610c7c
// address: 0x100610c7c
// body: available
// range: 0x100610c7c-0x100610d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100610c7c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar2 = 0;
  FUN_100608530(0,lVar5);
  lVar7 = *(long *)(lVar2 + -8);
  puVar6 = &stack0xffffffffffffffc0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)unaff_x20[2] + 0x58))(puVar6);
  puVar3 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
    lVar2 = 0;
    FUN_100616300(0,lVar5);
    pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,puVar6,lVar5);
    lVar2 = 0;
    FUN_100616300(0,lVar5);
    _swift_storeEnumTagMultiPayload(param_1,lVar2,0);
    pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  (*pcVar4)(param_1,bVar1,1,lVar2);
  return;
}

