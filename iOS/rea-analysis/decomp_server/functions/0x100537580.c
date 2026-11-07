// rea decompile_all
// name: FUN_100537580
// address: 0x100537580
// body: available
// range: 0x100537580-0x100537713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100537698) */

void FUN_100537580(undefined8 param_1,ulong param_2,byte param_3,long *param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  long *plVar1;
  long unaff_x21;
  undefined1 auStack_b0 [16];
  long *local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  byte local_80;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  long local_58;
  
  if (((param_2 & 1) != 0) ||
     (plVar1 = param_4, (**(code **)(param_6 + 0x20))(param_4,param_6), ((ulong)plVar1 & 1) != 0)) {
    local_58 = 0;
    plVar1 = &local_58;
    (**(code **)(param_6 + 0x48))(plVar1,&DAT_1009ce318,&PTR_PTR_1009ce330,param_4,param_6);
    if (unaff_x21 != 0) {
      return;
    }
    if (local_58 < 0x7fffffff) {
      (**(code **)(param_7 + 8))(param_1,0,local_58,param_5,param_7);
      local_80 = param_3 & 1;
      local_a0 = param_4;
      uStack_98 = param_5;
      local_90 = param_6;
      lStack_88 = param_7;
      local_68 = auStack_70;
      (**(code **)(param_7 + 0x28))
                (FUN_1005378d4,auStack_b0,PTR___sytN_100995e90 + 8,param_5,param_7);
      return;
    }
  }
  FUN_1004f97f4();
  _swift_allocError(&DAT_1009ce218,plVar1,0,0);
  *(undefined1 *)plVar1 = 1;
  _swift_willThrow();
  return;
}

