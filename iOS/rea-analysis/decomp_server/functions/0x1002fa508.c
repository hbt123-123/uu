// rea decompile_all
// name: FUN_1002fa508
// address: 0x1002fa508
// body: available
// range: 0x1002fa508-0x1002fa5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fa508(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = 0;
  FUN_1002fa4fc(0,lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  lVar6 = *(long *)(lVar3 + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar5,unaff_x20 + *(int *)(param_2 + 0x2c),lVar3);
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  bVar2 = (int)puVar4 != 1;
  if (bVar2) {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    lVar3 = *(long *)(lVar1 + -8);
  }
  else {
    lVar3 = *(long *)(lVar1 + -8);
    (**(code **)(lVar3 + 0x20))(param_1,puVar5,lVar1);
  }
  (**(code **)(lVar3 + 0x38))(param_1,bVar2,1,lVar1);
  return;
}

