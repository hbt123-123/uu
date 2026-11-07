// rea decompile_all
// name: FUN_10048e284
// address: 0x10048e284
// body: available
// range: 0x10048e284-0x10048e3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048e284(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long local_50;
  undefined1 local_48;
  
  lVar1 = *unaff_x20;
  if ((*(long *)(lVar1 + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x138))(lVar1,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[1] != 0) {
      local_48 = (undefined1)unaff_x20[2];
      pcVar2 = *(code **)(param_3 + 0x80);
      local_50 = unaff_x20[1];
      FUN_100493538();
      (*pcVar2)(&local_50,2,&DAT_1009c66e0,lVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((((*(char *)((long)unaff_x20 + 0x11) != '\x01') ||
         ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)) &&
        ((*(long *)(unaff_x20[3] + 0x10) == 0 ||
         ((**(code **)(param_3 + 0x198))
                    (unaff_x20[3],4,&DAT_1009cf730,&DAT_1009cf730,&PTR_PTR_1009cf548,
                     &PTR_PTR_1009cf560,param_2,param_3), unaff_x21 == 0)))) &&
       ((((char)unaff_x20[4] != '\x01' ||
         ((**(code **)(param_3 + 0x68))(1,5,param_2,param_3), unaff_x21 == 0)) &&
        (FUN_10048e3f4(), unaff_x21 == 0)))) {
      FUN_10056301c(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}

