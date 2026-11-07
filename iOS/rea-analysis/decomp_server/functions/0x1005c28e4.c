// rea decompile_all
// name: FUN_1005c28e4
// address: 0x1005c28e4
// body: available
// range: 0x1005c28e4-0x1005c2a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c28e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong local_60;
  undefined1 local_58;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar4 = unaff_x20[2];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      FUN_1005c4a90();
      (*pcVar5)(uVar4,2,&DAT_1009d78d0,uVar2,param_2,param_3);
      uVar2 = uVar4;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[3];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      FUN_100569038();
      (*pcVar5)(uVar4,3,&DAT_1009d7958,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    puVar3 = unaff_x20;
    FUN_1005c2a8c();
    if (unaff_x21 == 0) {
      if (unaff_x20[4] != 0) {
        local_58 = (undefined1)unaff_x20[5];
        pcVar5 = *(code **)(param_3 + 0x80);
        local_60 = unaff_x20[4];
        FUN_1005690b8();
        (*pcVar5)(&local_60,5,&DAT_1009d7560,puVar3,param_2,param_3);
      }
      uVar2 = unaff_x20[7];
      uVar4 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,6,param_2,param_3);
      }
      FUN_10056301c(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}

