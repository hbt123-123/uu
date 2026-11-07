// rea decompile_all
// name: FUN_10053da3c
// address: 0x10053da3c
// body: available
// range: 0x10053da3c-0x10053daff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053da3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&local_80;
  FUN_1000b142c(param_1,auStack_68);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_80,auStack_68,puVar2,param_4,6);
  if (iVar1 == 0) {
    uStack_78 = 0xf000000000000000;
    local_80 = 0;
    (*param_5)(0,0xf000000000000000);
    uVar3 = 0;
  }
  else {
    FUN_1000094a4(param_2,param_3,local_80,uStack_78);
    uVar3 = (uint)param_2;
    (*param_5)(local_80,uStack_78);
  }
  return uVar3 & 1;
}

