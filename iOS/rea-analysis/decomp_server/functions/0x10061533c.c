// rea decompile_all
// name: FUN_10061533c
// address: 0x10061533c
// body: available
// range: 0x10061533c-0x10061541f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061533c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0xff;
  FUN_100616300(0xff,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar3 = 0;
  FUN_100608530(0,lVar2);
  lVar6 = *(long *)(lVar3 + -8);
  puVar5 = &stack0xffffffffffffffc0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)unaff_x20[2] + 0x58))(puVar5);
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  bVar1 = (int)puVar4 != 1;
  if (bVar1) {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    lVar3 = *(long *)(lVar2 + -8);
  }
  else {
    lVar3 = *(long *)(lVar2 + -8);
    (**(code **)(lVar3 + 0x20))(param_1,puVar5,lVar2);
  }
  (**(code **)(lVar3 + 0x38))(param_1,bVar1,1,lVar2);
  return;
}

