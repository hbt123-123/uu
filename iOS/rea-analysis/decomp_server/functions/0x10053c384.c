// rea decompile_all
// name: FUN_10053c384
// address: 0x10053c384
// body: available
// range: 0x10053c384-0x10053c47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053c384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 auStack_78 [40];
  
  FUN_1000b142c(param_1,auStack_78);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_98;
  _swift_dynamicCast(puVar2,auStack_78,puVar1,&DAT_1009d5ec0,6);
  if ((int)puVar2 == 0) {
    local_98 = 0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    FUN_100483534(0,0,0,0);
    uVar3 = 0;
  }
  else {
    thunk_FUN_1005a5398(param_2,param_3,param_4,param_5,local_98,uStack_90,local_88,local_80);
    uVar3 = (uint)param_2;
    FUN_100483534(local_98,uStack_90,local_88,local_80);
  }
  return uVar3 & 1;
}

