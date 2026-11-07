// rea decompile_all
// name: FUN_10041d118
// address: 0x10041d118
// body: available
// range: 0x10041d118-0x10041d207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041d118(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    FUN_10042db90();
    (*pcVar3)(lVar2,1,&DAT_1009be410,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((int)unaff_x20[1] == 0) ||
     ((**(code **)(param_3 + 0x18))((int)unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)) {
    if (((unaff_x20[6] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
      if (((ulong)unaff_x20[6] >> 0x3d & 1) == 0) {
        FUN_10041d208();
      }
      else {
        FUN_10041d288();
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_10056301c(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  }
  return;
}

