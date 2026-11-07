// rea decompile_all
// name: FUN_100452930
// address: 0x100452930
// body: available
// range: 0x100452930-0x100452aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100452930(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  long local_60;
  undefined1 local_58;
  
  lVar5 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar3 = lVar5;
  FUN_100008290(lVar5,(char)lVar2);
  if (lVar3 != 0) {
    pcVar6 = *(code **)(param_3 + 0x80);
    local_60 = lVar5;
    local_58 = (char)lVar2;
    FUN_10045ecf8();
    (*pcVar6)(&local_60,1,&DAT_1009c38b8,lVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar1 = unaff_x20[3];
  uVar4 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar1,2,param_2,param_3), unaff_x21 == 0)) {
    uVar4 = unaff_x20[0xb];
    if ((uVar4 & 0x3000000000000000 & unaff_x20[9]) != 0x3000000000000000) {
      if ((uVar4 >> 0x3c & 3) == 0) {
        FUN_100452aac();
      }
      else if (((uint)(uVar4 >> 0x3c) & 3) == 1) {
        FUN_100452b38();
      }
      else {
        if ((uVar4 & 0x3000000000000000) != 0x2000000000000000) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100452aac);
          (*pcVar6)();
        }
        (**(code **)(param_3 + 0x28))((int)unaff_x20[4],5,param_2,param_3);
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_10056301c(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  }
  return;
}

