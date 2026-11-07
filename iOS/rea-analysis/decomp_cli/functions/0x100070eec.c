// rea decompile_all
// name: FUN_100070eec
// address: 0x100070eec
// body: available
// range: 0x100070eec-0x100070fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100070eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0;
  __sSqMa(0,param_4);
  lVar6 = *(long *)(lVar2 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __ss25LosslessStringConvertiblePyxSgSScfCTj(puVar5,param_2,param_3,param_4,param_6);
  lVar4 = *(long *)(param_4 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar4 + 0x30))(puVar5,1,param_4);
  bVar1 = (int)puVar3 == 0;
  if (bVar1) {
    (**(code **)(lVar4 + 0x20))(param_1,puVar5,param_4);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar2);
  }
  (**(code **)(lVar4 + 0x38))(param_1,!bVar1,1,param_4);
  return;
}

