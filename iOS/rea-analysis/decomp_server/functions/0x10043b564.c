// rea decompile_all
// name: FUN_10043b564
// address: 0x10043b564
// body: available
// range: 0x10043b564-0x10043b6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10043b564(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long local_50;
  undefined1 local_48;
  
  if (*unaff_x20 != 0) {
    local_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar2 = param_1;
    local_50 = *unaff_x20;
    FUN_10043ca40();
    (*pcVar4)(&local_50,1,&DAT_1009c03e0,uVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar3 = (ulong)*(uint *)((long)unaff_x20 + 0xc);
  if ((*(uint *)((long)unaff_x20 + 0xc) == 0) ||
     ((**(code **)(param_3 + 0x18))(uVar3,2,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[2] == 0) {
      iVar1 = *(int *)((long)unaff_x20 + 0x1c);
    }
    else {
      local_48 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      local_50 = unaff_x20[2];
      FUN_10043c900();
      (*pcVar4)(&local_50,3,&DAT_1009c0350,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
      iVar1 = *(int *)((long)unaff_x20 + 0x1c);
    }
    if (((iVar1 == 0) || ((**(code **)(param_3 + 0x18))(iVar1,4,param_2,param_3), unaff_x21 == 0))
       && (((int)unaff_x20[4] == 0 ||
           ((**(code **)(param_3 + 0x18))((int)unaff_x20[4],5,param_2,param_3), unaff_x21 == 0)))) {
      FUN_10056301c(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}

