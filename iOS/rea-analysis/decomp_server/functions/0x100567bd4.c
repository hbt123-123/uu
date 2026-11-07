// rea decompile_all
// name: FUN_100567bd4
// address: 0x100567bd4
// body: available
// range: 0x100567bd4-0x100567dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100567bd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong local_60;
  undefined1 local_58;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar5 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar5 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar5 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar5 = unaff_x20[2];
    if (*(long *)(uVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      FUN_100568ff8();
      (*pcVar6)(uVar5,2,&DAT_1009d2778,uVar2,param_2,param_3);
      uVar2 = uVar5;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar5 = unaff_x20[3];
    if (*(long *)(uVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      FUN_100569038();
      (*pcVar6)(uVar5,3,&DAT_1009d7958,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar2 = unaff_x20[5];
    uVar5 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar5 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar5 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,4,param_2,param_3), unaff_x21 == 0)) &&
       (puVar3 = unaff_x20, FUN_100567dbc(), unaff_x21 == 0)) {
      puVar4 = (ulong *)unaff_x20[6];
      if (puVar4[2] != 0) {
        pcVar6 = *(code **)(param_3 + 0x118);
        FUN_100569078();
        (*pcVar6)(puVar4,6,&DAT_1009d2810,puVar3,param_2,param_3);
        puVar3 = puVar4;
      }
      if (unaff_x20[7] != 0) {
        local_58 = (undefined1)unaff_x20[8];
        pcVar6 = *(code **)(param_3 + 0x80);
        local_60 = unaff_x20[7];
        FUN_1005690b8();
        (*pcVar6)(&local_60,7,&DAT_1009d7560,puVar3,param_2,param_3);
      }
      FUN_10056301c(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
    }
  }
  return;
}

