// rea decompile_all
// name: FUN_100458b08
// address: 0x100458b08
// body: available
// range: 0x100458b08-0x100458ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100458b08(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long local_50;
  undefined1 local_48;
  
  plVar2 = &local_50;
  plVar3 = &local_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    local_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    local_50 = *unaff_x20;
    FUN_10045f0f8();
    (*pcVar4)(&local_50,1,&DAT_1009c42c0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    local_48 = (undefined1)unaff_x20[3];
    pcVar4 = *(code **)(param_3 + 0x80);
    local_50 = unaff_x20[2];
    FUN_10045f138();
    (*pcVar4)(&local_50,2,&DAT_1009c41a0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    local_48 = (undefined1)unaff_x20[5];
    pcVar4 = *(code **)(param_3 + 0x80);
    local_50 = unaff_x20[4];
    FUN_10045f178();
    (*pcVar4)(&local_50,3,&DAT_1009c4230,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((((((*(char *)((long)unaff_x20 + 0x29) != '\x01') ||
         ((**(code **)(param_3 + 0x68))(1,4,param_2,param_3), unaff_x21 == 0)) &&
        ((*(int *)((long)unaff_x20 + 0x2c) == 0 ||
         ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x2c),5,param_2,param_3),
         unaff_x21 == 0)))) &&
       (((int)unaff_x20[6] == 0 ||
        ((**(code **)(param_3 + 0x18))((int)unaff_x20[6],6,param_2,param_3), unaff_x21 == 0)))) &&
      ((*(int *)((long)unaff_x20 + 0x34) == 0 ||
       ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x34),7,param_2,param_3),
       unaff_x21 == 0)))) &&
     ((unaff_x20[7] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[7],8,param_2,param_3), unaff_x21 == 0)))) {
    FUN_10056301c(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}

