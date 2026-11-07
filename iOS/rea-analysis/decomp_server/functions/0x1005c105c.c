// rea decompile_all
// name: FUN_1005c105c
// address: 0x1005c105c
// body: available
// range: 0x1005c105c-0x1005c1227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c105c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong local_60;
  undefined1 local_58;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = uVar3 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar4 = unaff_x20[2];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      FUN_1005c49d0();
      (*pcVar5)(uVar4,2,&DAT_1009d7670,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[3];
    if ((*(long *)(uVar4 + 0x10) == 0) ||
       ((**(code **)(param_3 + 0x100))(uVar4,3,param_2,param_3), unaff_x21 == 0)) {
      uVar3 = unaff_x20[4];
      if (*(long *)(uVar3 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        FUN_100569038();
        (*pcVar5)(uVar3,4,&DAT_1009d7958,uVar4,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      puVar2 = unaff_x20;
      FUN_100567dbc();
      if (unaff_x21 == 0) {
        if (unaff_x20[5] != 0) {
          local_58 = (undefined1)unaff_x20[6];
          pcVar5 = *(code **)(param_3 + 0x80);
          local_60 = unaff_x20[5];
          FUN_1005690b8();
          (*pcVar5)(&local_60,6,&DAT_1009d7560,puVar2,param_2,param_3);
        }
        uVar3 = unaff_x20[8];
        uVar4 = unaff_x20[7] & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar4 = uVar3 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          (**(code **)(param_3 + 0x70))(unaff_x20[7],uVar3,7,param_2,param_3);
        }
        FUN_10056301c(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
      }
    }
  }
  return;
}

