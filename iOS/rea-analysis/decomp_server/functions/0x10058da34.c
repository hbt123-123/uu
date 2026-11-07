// rea decompile_all
// name: FUN_10058da34
// address: 0x10058da34
// body: available
// range: 0x10058da34-0x10058dbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10058da34(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_1d8 [72];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [24];
  long local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  ulong local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_beginAccess(param_1 + 0x20,auStack_c0,0,0);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar3 = lVar7;
  _swift_bridgeObjectRetain();
  FUN_10056abdc();
  _swift_bridgeObjectRelease(lVar7);
  lVar6 = *(long *)(lVar3 + 0x10);
  uVar8 = 0xffffffffffffffff;
  lVar7 = lVar3 + 0x20;
  while( true ) {
    if (uVar8 - lVar6 == -1) {
      _swift_bridgeObjectRelease(lVar3);
      _swift_beginAccess(param_1 + 0x28,auStack_148,0,0);
      uStack_128 = *(undefined8 *)(param_1 + 0x30);
      local_130 = *(long *)(param_1 + 0x28);
      uStack_118 = *(undefined8 *)(param_1 + 0x40);
      uStack_120 = *(undefined8 *)(param_1 + 0x38);
      uStack_108 = *(undefined8 *)(param_1 + 0x50);
      local_110 = *(undefined8 *)(param_1 + 0x48);
      uStack_f8 = *(undefined8 *)(param_1 + 0x60);
      uStack_100 = *(undefined8 *)(param_1 + 0x58);
      local_f0 = *(undefined8 *)(param_1 + 0x68);
      if (local_130 != 0) {
        uStack_98 = *(undefined8 *)(param_1 + 0x38);
        local_a0 = *(undefined8 *)(param_1 + 0x30);
        uStack_88 = *(undefined8 *)(param_1 + 0x48);
        uStack_90 = *(undefined8 *)(param_1 + 0x40);
        uStack_78 = *(undefined8 *)(param_1 + 0x58);
        local_80 = *(undefined8 *)(param_1 + 0x50);
        uStack_68 = *(undefined8 *)(param_1 + 0x68);
        uStack_70 = *(undefined8 *)(param_1 + 0x60);
        uStack_178 = *(undefined8 *)(param_1 + 0x40);
        uStack_180 = *(undefined8 *)(param_1 + 0x38);
        uStack_168 = *(undefined8 *)(param_1 + 0x50);
        local_170 = *(undefined8 *)(param_1 + 0x48);
        uStack_158 = *(undefined8 *)(param_1 + 0x60);
        uStack_160 = *(undefined8 *)(param_1 + 0x58);
        local_150 = *(undefined8 *)(param_1 + 0x68);
        uStack_188 = *(undefined8 *)(param_1 + 0x30);
        local_190 = *(undefined8 *)(param_1 + 0x28);
        puVar5 = &local_190;
        local_a8 = local_130;
        FUN_1005a8324(puVar5,auStack_1d8);
        thunk_FUN_10058fbd0();
        FUN_100040bb4(&local_130,&DAT_100aab4b8,&DAT_100837c28);
        if (((ulong)puVar5 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
    uVar8 = uVar8 + 1;
    if (*(ulong *)(lVar3 + 0x10) <= uVar8) break;
    FUN_1000b142c(lVar7,auStack_e8);
    lVar1 = lStack_c8;
    uVar4 = local_d0;
    FUN_10003f030(auStack_e8,local_d0);
    (**(code **)(lVar1 + 0x20))(uVar4,lVar1);
    FUN_10003f094(auStack_e8);
    lVar7 = lVar7 + 0x28;
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar3);
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10058dbf4);
  (*pcVar2)();
}

