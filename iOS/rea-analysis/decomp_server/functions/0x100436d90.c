// rea decompile_all
// name: FUN_100436d90
// address: 0x100436d90
// body: available
// range: 0x100436d90-0x10043701f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100436d90(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long local_50;
  undefined1 local_48;
  
  plVar1 = &local_50;
  plVar2 = &local_50;
  puVar3 = param_1;
  if (*unaff_x20 != 0) {
    local_48 = (undefined1)unaff_x20[1];
    pcVar5 = *(code **)(param_3 + 0x80);
    local_50 = *unaff_x20;
    FUN_10043c7c0();
    (*pcVar5)(&local_50,1,&DAT_1009c01a0,puVar3,param_2,param_3);
    puVar3 = (undefined1 *)plVar1;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    local_48 = (undefined1)unaff_x20[3];
    pcVar5 = *(code **)(param_3 + 0x80);
    local_50 = unaff_x20[2];
    FUN_10043c800();
    (*pcVar5)(&local_50,2,&DAT_1009c02c0,puVar3,param_2,param_3);
    puVar3 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(char *)((long)unaff_x20 + 0x19) == '\x01') {
    puVar3 = (undefined1 *)0x1;
    (**(code **)(param_3 + 0x68))(1,3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    local_48 = (undefined1)unaff_x20[5];
    pcVar5 = *(code **)(param_3 + 0x80);
    local_50 = unaff_x20[4];
    FUN_10043c840();
    (*pcVar5)(&local_50,4,&DAT_1009c0500,puVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_100437020();
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_1004370a8();
    if (unaff_x20[6] != 0) {
      local_48 = (undefined1)unaff_x20[7];
      pcVar5 = *(code **)(param_3 + 0x80);
      local_50 = unaff_x20[6];
      FUN_10043c880();
      (*pcVar5)(&local_50,7,&DAT_1009c0590,plVar1,param_2,param_3);
    }
    uVar4 = (ulong)*(uint *)((long)unaff_x20 + 0x3c);
    if (*(uint *)((long)unaff_x20 + 0x3c) != 0) {
      (**(code **)(param_3 + 0x18))(uVar4,8,param_2,param_3);
    }
    if ((char)unaff_x20[8] == '\x01') {
      uVar4 = 1;
      (**(code **)(param_3 + 0x68))(1,9,param_2,param_3);
    }
    if (unaff_x20[9] != 0) {
      local_48 = (undefined1)unaff_x20[10];
      pcVar5 = *(code **)(param_3 + 0x80);
      local_50 = unaff_x20[9];
      FUN_10043c800();
      (*pcVar5)(&local_50,10,&DAT_1009c02c0,uVar4,param_2,param_3);
    }
    if (*(int *)((long)unaff_x20 + 0x54) != 0) {
      (**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x54),0xb,param_2,param_3);
    }
    FUN_10056301c(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
  }
  return;
}

