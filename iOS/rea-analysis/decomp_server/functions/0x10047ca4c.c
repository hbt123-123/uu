// rea decompile_all
// name: FUN_10047ca4c
// address: 0x10047ca4c
// body: available
// range: 0x10047ca4c-0x10047cbaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047ca4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150;
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
  undefined1 local_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar2 = &local_210;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x10),1,param_3,param_4), unaff_x21 == 0)) {
    _swift_beginAccess(param_1 + 0x18,auStack_70,0,0);
    if ((*(long *)(param_1 + 0x18) == 0) ||
       ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x18),2,param_3,param_4), unaff_x21 == 0))
    {
      uStack_98 = *(undefined8 *)(param_1 + 200);
      local_a0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_88 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xd0);
      local_80 = *(undefined1 *)(param_1 + 0xe0);
      uStack_d8 = *(undefined8 *)(param_1 + 0x88);
      local_e0 = *(undefined8 *)(param_1 + 0x80);
      uStack_c8 = *(undefined8 *)(param_1 + 0x98);
      uStack_d0 = *(undefined8 *)(param_1 + 0x90);
      uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
      local_c0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_a8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_118 = *(undefined8 *)(param_1 + 0x48);
      local_120 = *(undefined8 *)(param_1 + 0x40);
      uStack_108 = *(undefined8 *)(param_1 + 0x58);
      uStack_110 = *(undefined8 *)(param_1 + 0x50);
      uStack_f8 = *(undefined8 *)(param_1 + 0x68);
      local_100 = *(undefined8 *)(param_1 + 0x60);
      uStack_e8 = *(undefined8 *)(param_1 + 0x78);
      uStack_f0 = *(undefined8 *)(param_1 + 0x70);
      uStack_138 = *(undefined8 *)(param_1 + 0x28);
      local_140 = *(undefined8 *)(param_1 + 0x20);
      uStack_128 = *(undefined8 *)(param_1 + 0x38);
      uStack_130 = *(undefined8 *)(param_1 + 0x30);
      iVar1 = (int)&local_140;
      FUN_1001218ec();
      if (iVar1 != 1) {
        uStack_168 = uStack_98;
        local_170 = local_a0;
        uStack_158 = uStack_88;
        uStack_160 = uStack_90;
        local_150 = local_80;
        uStack_1a8 = uStack_d8;
        local_1b0 = local_e0;
        uStack_198 = uStack_c8;
        uStack_1a0 = uStack_d0;
        uStack_188 = uStack_b8;
        local_190 = local_c0;
        uStack_178 = uStack_a8;
        uStack_180 = uStack_b0;
        uStack_1e8 = uStack_118;
        local_1f0 = local_120;
        uStack_1d8 = uStack_108;
        uStack_1e0 = uStack_110;
        uStack_1c8 = uStack_f8;
        local_1d0 = local_100;
        uStack_1b8 = uStack_e8;
        uStack_1c0 = uStack_f0;
        uStack_208 = uStack_138;
        local_210 = local_140;
        uStack_1f8 = uStack_128;
        uStack_200 = uStack_130;
        FUN_100121900();
                    /* WARNING: Could not recover jumptable at 0x00010047cbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_10047cbb0 + (ulong)(byte)(&DAT_10082da6c)[(ulong)puVar2 & 0xffffffff] * 4))
                  ();
        return;
      }
    }
  }
  return;
}

