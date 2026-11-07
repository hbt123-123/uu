// rea decompile_all
// name: FUN_100510940
// address: 0x100510940
// body: available
// range: 0x100510940-0x100510b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100510940(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar9 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_2 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0;
  puVar8 = (undefined1 *)0x1000193;
  lVar7 = lVar4;
  if (uVar9 == 0) goto LAB_1005109b8;
LAB_1005109e4:
  do {
    uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar7 << 6;
    local_150 = *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar5 * 8);
    FUN_1000b142c(*(long *)(param_2 + 0x38) + uVar5 * 0x28,&uStack_148);
    lVar4 = lVar7;
    while( true ) {
      uVar1 = local_150;
      uStack_c8 = uStack_138;
      local_d0 = local_140;
      uStack_b8 = uStack_128;
      local_c0 = local_130;
      uStack_d8 = uStack_148;
      local_e0 = local_150;
      if (local_130 == 0) {
        _swift_release(param_2);
        __ss6HasherV8_combineyySuF(puVar8);
        return;
      }
      thunk_FUN_1000a0074(&uStack_d8,auStack_108);
      uStack_128 = param_1[5];
      local_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      local_110 = param_1[8];
      uStack_148 = param_1[1];
      local_150 = *param_1;
      uStack_138 = param_1[3];
      local_140 = param_1[2];
      __ss6HasherV8_combineyySuF(uVar1);
      lVar7 = lStack_e8;
      uVar1 = local_f0;
      FUN_10003f030(auStack_108,local_f0);
      puVar3 = &local_150;
      (**(code **)(lVar7 + 0x10))(&local_150,uVar1,lVar7);
      uStack_88 = uStack_128;
      local_90 = local_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      local_70 = local_110;
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      uStack_98 = uStack_138;
      uStack_a0 = local_140;
      __ss6HasherV8finalizeSiyF();
      puVar8 = (undefined1 *)((long)puVar3 + (long)puVar8);
      FUN_10003f094(auStack_108);
      lVar7 = lVar4;
      if (uVar9 != 0) break;
LAB_1005109b8:
      uVar5 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar5 = lVar4 + 1;
      }
      while( true ) {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100510b18);
          (*pcVar2)();
        }
        if ((long)uVar6 <= lVar7) break;
        uVar9 = ((ulong *)(param_2 + 0x40))[lVar7];
        lVar4 = lVar4 + 1;
        if (uVar9 != 0) goto LAB_1005109e4;
      }
      uVar9 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_148 = 0;
      local_150 = 0;
      lVar4 = uVar5 - 1;
    }
  } while( true );
}

