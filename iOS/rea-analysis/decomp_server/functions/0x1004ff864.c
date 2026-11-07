// rea decompile_all
// name: FUN_1004ff864
// address: 0x1004ff864
// body: available
// range: 0x1004ff864-0x1004ffbe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ff864(ulong *param_1,code *param_2)

{
  bool bVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 *local_108;
  ulong *puStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    FUN_1004fdea4();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong *)0x7ffffffe < puVar3) {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
      uVar7 = 3;
      goto LAB_1004ffb40;
    }
    puVar8 = (ulong *)unaff_x20[1];
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004ffbe4);
      (*pcVar2)();
    }
    if (puVar3 <= puVar8) {
      puVar14 = (undefined8 *)*unaff_x20;
      *unaff_x20 = (long)puVar14 + (long)puVar3;
      unaff_x20[1] = (long)puVar8 - (long)puVar3;
      puVar10 = (undefined1 *)*param_1;
      lVar12 = *(long *)(puVar10 + 0x10);
      if (SCARRY8(lVar12,(ulong)puVar3 >> 3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004ffbe8);
        (*pcVar2)();
      }
      puVar5 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar5 == 0) ||
         ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < (long)(lVar12 + ((ulong)puVar3 >> 3)))) {
        (*param_2)();
        puVar10 = puVar5;
      }
      *param_1 = (ulong)puVar10;
      FUN_1005062d0();
      FUN_10007f314(auStack_178,auStack_1d0,&DAT_100aaa0e8,&DAT_1008358c0);
      local_e8 = 1;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      local_a8 = 1;
      uStack_80 = 0xf000000000000000;
      local_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_f0 = 0;
      local_108 = puVar14;
      puStack_100 = puVar3;
      local_f8 = puVar14;
      FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
      local_a0 = local_140;
      local_98 = local_138;
      puVar5 = auStack_1a8;
      FUN_100506304();
      local_90 = local_130;
      puVar9 = (undefined1 *)*param_1;
      if (puVar3 != (ulong *)0x0) {
        puVar8 = puVar3;
        if (7 < (long)puVar3) {
          do {
            uVar13 = *puVar14;
            uVar4 = *(ulong *)(puVar10 + 0x10);
            puVar9 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar4) {
              puVar5 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              (*param_2)(puVar5,uVar4 + 1,1,puVar10);
              puVar9 = puVar5;
            }
            puVar14 = puVar14 + 1;
            *(ulong *)(puVar9 + 0x10) = uVar4 + 1;
            *(undefined8 *)(puVar9 + uVar4 * 8 + 0x20) = uVar13;
            if (puVar8 == (ulong *)0x8) goto LAB_1004ffb74;
            puVar3 = puVar8 + -1;
            bVar1 = 0xf < (long)puVar8;
            puVar8 = puVar3;
            puVar10 = puVar9;
          } while (bVar1);
        }
        *param_1 = (ulong)puVar9;
        local_108 = puVar14;
        puStack_100 = puVar3;
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar5,0,0);
        *puVar5 = 1;
        _swift_willThrow();
        FUN_100506304(&local_108);
        return;
      }
LAB_1004ffb74:
      *param_1 = (ulong)puVar9;
      puStack_100 = (ulong *)0x0;
      local_108 = puVar14;
      FUN_100506304(&local_108);
      *(undefined1 *)(unaff_x20 + 4) = 1;
      return;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x01') {
      return;
    }
    if (7 < unaff_x20[1]) {
      uVar13 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      uVar11 = *param_1;
      uVar4 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar11;
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
        (*param_2)(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar4 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        (*param_2)(uVar11,uVar4 + 1,1,uVar6);
        uVar6 = uVar11;
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      *(undefined8 *)(uVar6 + uVar4 * 8 + 0x20) = uVar13;
      *param_1 = uVar6;
      *(undefined1 *)(unaff_x20 + 4) = 1;
      return;
    }
  }
  FUN_100506290();
  _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
  uVar7 = 1;
LAB_1004ffb40:
  *(undefined1 *)puVar3 = uVar7;
  _swift_willThrow();
  return;
}

