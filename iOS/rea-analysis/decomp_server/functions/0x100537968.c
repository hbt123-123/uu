// rea decompile_all
// name: FUN_100537968
// address: 0x100537968
// body: available
// range: 0x100537968-0x100537aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100537968(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  byte param_6,undefined1 *param_7,long param_8)

{
  long unaff_x21;
  undefined1 auStack_130 [40];
  long local_108;
  long lStack_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  byte local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((param_1 != 0) && (0 < param_2 - param_1)) {
    FUN_1004f9894(param_3,auStack_130);
    local_e8 = 1;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_a8 = 1;
    uStack_80 = 0xf000000000000000;
    local_88 = 0;
    uStack_70 = 0xf000000000000000;
    uStack_78 = 0;
    uStack_f0 = 0;
    local_108 = param_1;
    lStack_100 = param_2 - param_1;
    local_f8 = param_1;
    FUN_100537ab0(auStack_130,&uStack_d8);
    local_98 = param_6 & 1;
    local_a0 = param_5;
    local_90 = param_5;
    FUN_100501168();
    FUN_100506304(&local_108);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((param_4 & 1) == 0) &&
     ((**(code **)(param_8 + 0x20))(param_7,param_8), ((ulong)param_7 & 1) == 0)) {
    FUN_100506290();
    _swift_allocError(&DAT_1009cdf18,param_7,0,0);
    *param_7 = 4;
    _swift_willThrow();
  }
  return;
}

