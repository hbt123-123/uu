// rea decompile_all
// name: FUN_10053c8c4
// address: 0x10053c8c4
// body: available
// range: 0x10053c8c4-0x10053c9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053c8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  int local_78;
  byte local_74;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&local_90;
  FUN_1000b142c(param_1,auStack_68);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_90,auStack_68,puVar2,param_6,6);
  if (iVar1 == 0) {
    uStack_88 = 0xf000000000000000;
    local_90 = 0;
    local_80 = 0;
    local_74 = 0;
    local_78 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)CONCAT14(local_74,local_78);
    if ((param_4 >> 0x20 & 1) == 0) {
      if (((local_80 >> 0x20 & 1) == 0) && ((int)param_4 == (int)local_80)) {
LAB_10053c9a4:
        if ((param_5 >> 0x20 & 1) == 0) {
          if (((local_74 & 1) == 0) && ((int)param_5 == local_78)) {
LAB_10053c9bc:
            FUN_1000094a4(param_2,param_3,local_90,uStack_88);
            uVar4 = (uint)param_2;
            (*param_7)(local_90,uStack_88,local_80,uVar3);
            goto LAB_10053c984;
          }
        }
        else if ((local_74 & 1) != 0) goto LAB_10053c9bc;
      }
    }
    else if ((local_80 >> 0x20 & 1) != 0) goto LAB_10053c9a4;
  }
  (*param_7)(local_90,uStack_88,local_80,uVar3);
  uVar4 = 0;
LAB_10053c984:
  return uVar4 & 1;
}

