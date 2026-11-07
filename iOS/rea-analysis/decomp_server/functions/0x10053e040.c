// rea decompile_all
// name: FUN_10053e040
// address: 0x10053e040
// body: available
// range: 0x10053e040-0x10053e197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053e040(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint unaff_w20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(lVar1 + -8);
  puVar4 = auStack_90 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_2 + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000b142c(param_1,auStack_88);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar3 = puVar4;
  _swift_dynamicCast(puVar4,auStack_88,puVar2,param_2,6);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar6 + 0x38))(puVar4,1,1,param_2);
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    unaff_w20 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,param_2);
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,param_2);
    __sSQ2eeoiySbx_xtFZTj();
    (**(code **)(lVar6 + 8))(lVar5,param_2);
  }
  return unaff_w20 & 1;
}

