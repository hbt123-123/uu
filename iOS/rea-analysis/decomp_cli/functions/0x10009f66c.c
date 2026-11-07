// rea decompile_all
// name: FUN_10009f66c
// address: 0x10009f66c
// body: available
// range: 0x10009f66c-0x10009f8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010009f8c0) */

undefined1  [16] FUN_10009f66c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined *local_78;
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10009f8b8);
    (*pcVar6)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10009f8bc);
    (*pcVar6)();
  }
  uVar4 = lVar11 - param_2;
  if (uVar4 == 0) {
    uVar10 = 0xe700000000000000;
    uVar7 = 0x3e7974706d653c;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_1000f0740;
    _swift_bridgeObjectRetain();
    FUN_1000798d0(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10009f8c0);
      (*pcVar6)();
    }
    uVar13 = 0;
    uVar12 = param_2 << 6 | 0x20;
    while( true ) {
      puVar5 = local_78;
      if (lVar11 <= (long)(param_2 + uVar13) || uVar4 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009f8b0);
        (*pcVar6)();
      }
      puVar2 = (undefined8 *)(param_1 + uVar12);
      uStack_b8 = puVar2[1];
      local_c0 = (undefined *)*puVar2;
      uStack_a8 = puVar2[3];
      uStack_b0 = puVar2[2];
      local_a0 = puVar2[4];
      uStack_108 = puVar2[1];
      local_110 = *puVar2;
      uStack_f8 = puVar2[3];
      uStack_100 = puVar2[2];
      uStack_98 = (undefined1)puVar2[5];
      uStack_8f = *(undefined8 *)((long)puVar2 + 0x31);
      uStack_97 = (undefined7)*(undefined8 *)((long)puVar2 + 0x29);
      uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x29) >> 0x38);
      local_f0 = puVar2[4];
      uStack_e8 = (undefined1)puVar2[5];
      uStack_df = *(undefined8 *)((long)puVar2 + 0x31);
      uStack_e7 = (undefined7)*(undefined8 *)((long)puVar2 + 0x29);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x29) >> 0x38);
      FUN_10008efe8(&local_c0,&local_150);
      FUN_10009e23c(&local_d0,&local_110);
      uStack_148 = uStack_108;
      local_150 = local_110;
      uStack_138 = uStack_f8;
      uStack_140 = uStack_100;
      uStack_128 = uStack_e8;
      local_130 = local_f0;
      uStack_11f = uStack_df;
      uStack_127 = uStack_e7;
      uStack_120 = uStack_e0;
      FUN_10009f8f4(&local_150,FUN_1000838ec);
      uVar10 = uStack_c8;
      uVar7 = local_d0;
      uVar3 = *(ulong *)(puVar5 + 0x10);
      local_78 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
        FUN_1000798d0(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 1,1);
      }
      puVar5 = local_78;
      *(ulong *)(local_78 + 0x10) = uVar3 + 1;
      *(undefined8 *)(local_78 + uVar3 * 0x10 + 0x20) = uVar7;
      *(undefined8 *)(local_78 + uVar3 * 0x10 + 0x28) = uVar10;
      if (~param_2 + lVar11 == uVar13) break;
      lVar1 = uVar13 + 1;
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + 0x40;
      if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009f8b4);
        (*pcVar6)();
      }
    }
    _swift_bridgeObjectRelease(param_1);
    puVar8 = &DAT_100103ed8;
    local_c0 = puVar5;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    puVar9 = puVar8;
    FUN_100052ab4();
    uVar7 = 0x20;
    uVar10 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar8,puVar9);
    _swift_bridgeObjectRelease(puVar5);
  }
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = uVar7;
  return auVar14;
}

