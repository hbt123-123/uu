// rea decompile_all
// name: FUN_10045c49c
// address: 0x10045c49c
// body: available
// range: 0x10045c49c-0x10045c72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045c49c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  long local_50;
  undefined1 local_48;
  
  plVar3 = &local_50;
  plVar4 = &local_50;
  puVar2 = param_1;
  if (*unaff_x20 != 0) {
    local_48 = (undefined1)unaff_x20[1];
    pcVar6 = *(code **)(param_3 + 0x80);
    local_50 = *unaff_x20;
    FUN_10043c7c0();
    (*pcVar6)(&local_50,1,&DAT_1009c01a0,puVar2,param_2,param_3);
    puVar2 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    local_48 = (undefined1)unaff_x20[3];
    pcVar6 = *(code **)(param_3 + 0x80);
    local_50 = unaff_x20[2];
    FUN_10043c800();
    (*pcVar6)(&local_50,2,&DAT_1009c02c0,puVar2,param_2,param_3);
    puVar2 = (undefined1 *)plVar4;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] == 0) {
    iVar1 = *(int *)((long)unaff_x20 + 0x2c);
  }
  else {
    local_48 = (undefined1)unaff_x20[5];
    pcVar6 = *(code **)(param_3 + 0x80);
    local_50 = unaff_x20[4];
    FUN_10043c880();
    (*pcVar6)(&local_50,3,&DAT_1009c0590,puVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
    iVar1 = *(int *)((long)unaff_x20 + 0x2c);
  }
  if ((((iVar1 == 0) || ((**(code **)(param_3 + 0x18))(iVar1,4,param_2,param_3), unaff_x21 == 0)) &&
      (((int)unaff_x20[6] == 0 ||
       ((**(code **)(param_3 + 0x18))((int)unaff_x20[6],5,param_2,param_3), unaff_x21 == 0)))) &&
     ((uVar5 = (ulong)*(uint *)((long)unaff_x20 + 0x34), *(uint *)((long)unaff_x20 + 0x34) == 0 ||
      ((**(code **)(param_3 + 0x18))(uVar5,6,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[7] != 0) {
      local_48 = (undefined1)unaff_x20[8];
      pcVar6 = *(code **)(param_3 + 0x80);
      local_50 = unaff_x20[7];
      FUN_10043c840();
      (*pcVar6)(&local_50,7,&DAT_1009c0500,uVar5,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((((*(int *)((long)unaff_x20 + 0x44) == 0) ||
         ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x44),8,param_2,param_3),
         unaff_x21 == 0)) &&
        (((int)unaff_x20[9] == 0 ||
         ((**(code **)(param_3 + 0x18))((int)unaff_x20[9],9,param_2,param_3), unaff_x21 == 0)))) &&
       ((uVar5 = (ulong)*(uint *)((long)unaff_x20 + 0x4c), *(uint *)((long)unaff_x20 + 0x4c) == 0 ||
        ((**(code **)(param_3 + 0x18))(uVar5,10,param_2,param_3), unaff_x21 == 0)))) {
      if (unaff_x20[10] != 0) {
        local_48 = (undefined1)unaff_x20[0xb];
        pcVar6 = *(code **)(param_3 + 0x80);
        local_50 = unaff_x20[10];
        FUN_10045f538();
        (*pcVar6)(&local_50,0xb,&DAT_1009c0b30,uVar5,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10056301c(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
    }
  }
  return;
}

