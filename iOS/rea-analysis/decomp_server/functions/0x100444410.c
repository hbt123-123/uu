// rea decompile_all
// name: FUN_100444410
// address: 0x100444410
// body: available
// range: 0x100444410-0x10044453f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100444410(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  
  uVar2 = (ulong)*unaff_x20;
  if ((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x28))(uVar2,1,param_2,param_3), unaff_x21 == 0))
  {
    lVar3 = *(long *)(unaff_x20 + 2);
    if (*(long *)(lVar3 + 0x10) == 0) {
      bVar1 = (byte)unaff_x20[9];
    }
    else {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_100447e8c();
      (*pcVar4)(lVar3,2,&DAT_1009c12a8,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
      bVar1 = (byte)unaff_x20[9];
    }
    if ((bVar1 & 1) == 0) {
      (**(code **)(param_3 + 0x18))(unaff_x20[8],3,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      if ((unaff_x20[0xb] & 1) == 0) {
        (**(code **)(param_3 + 8))(unaff_x20[10],4,param_2,param_3);
      }
      if ((unaff_x20[0xd] & 1) == 0) {
        (**(code **)(param_3 + 0x28))(unaff_x20[0xc],5,param_2,param_3);
      }
      FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),param_2,
                    param_3);
    }
  }
  return;
}

