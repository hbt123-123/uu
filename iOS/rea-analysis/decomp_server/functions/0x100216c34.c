// rea decompile_all
// name: FUN_100216c34
// address: 0x100216c34
// body: available
// range: 0x100216c34-0x100216d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100216c34(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_beginAccess(param_1 + 0x48,&local_e0,0x21,0);
  FUN_1001de460(param_2 & 0xffffffff000000ff,param_3);
  _swift_endAccess(&local_e0);
  _swift_beginAccess(param_1 + 0x40,&local_e0,0x21,0);
  FUN_10004bb5c(&local_180,param_2 & 0xffffffff000000ff,param_3);
  _swift_endAccess(&local_e0);
  uStack_78 = uStack_118;
  local_80 = local_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  local_60 = local_100;
  uStack_48 = uStack_e8;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  local_c0 = local_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  local_a0 = local_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  local_e0 = local_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  FUN_100040bb4(&local_e0,&DAT_100a7cf30,&DAT_100811970);
  return;
}

