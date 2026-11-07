// rea decompile_all
// name: FUN_1004ff3c0
// address: 0x1004ff3c0
// body: available
// range: 0x1004ff3c0-0x1004ff743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ff3c0(ulong *param_1,code *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined4 *local_108;
  ulong *puStack_100;
  undefined4 *local_f8;
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
  
  puVar9 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    FUN_1004fdea4();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong *)0x7ffffffe < puVar9) {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar9,0,0);
      uVar7 = 3;
      goto LAB_1004ff69c;
    }
    puVar8 = (ulong *)unaff_x20[1];
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004ff740);
      (*pcVar3)();
    }
    if (puVar9 <= puVar8) {
      puVar14 = (undefined4 *)*unaff_x20;
      *unaff_x20 = (long)puVar14 + (long)puVar9;
      unaff_x20[1] = (long)puVar8 - (long)puVar9;
      puVar11 = (undefined1 *)*param_1;
      lVar13 = *(long *)(puVar11 + 0x10);
      if (SCARRY8(lVar13,(ulong)puVar9 >> 2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004ff744);
        (*pcVar3)();
      }
      puVar5 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar5 == 0) ||
         ((long)(*(ulong *)(puVar11 + 0x18) >> 1) < (long)(lVar13 + ((ulong)puVar9 >> 2)))) {
        (*param_2)();
        puVar11 = puVar5;
      }
      *param_1 = (ulong)puVar11;
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
      puStack_100 = puVar9;
      local_f8 = puVar14;
      FUN_100128b30(auStack_1d0,&uStack_d8,&DAT_100aaa0e8,&DAT_1008358c0);
      local_a0 = local_140;
      local_98 = local_138;
      puVar5 = auStack_1a8;
      FUN_100506304();
      local_90 = local_130;
      puVar10 = (undefined1 *)*param_1;
      if (puVar9 != (ulong *)0x0) {
        puVar8 = puVar9;
        if (3 < (long)puVar9) {
          do {
            uVar2 = *puVar14;
            uVar4 = *(ulong *)(puVar11 + 0x10);
            puVar10 = puVar11;
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar4) {
              puVar5 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              (*param_2)(puVar5,uVar4 + 1,1,puVar11);
              puVar10 = puVar5;
            }
            puVar14 = puVar14 + 1;
            *(ulong *)(puVar10 + 0x10) = uVar4 + 1;
            *(undefined4 *)(puVar10 + uVar4 * 4 + 0x20) = uVar2;
            if (puVar8 == (ulong *)0x4) goto LAB_1004ff6d0;
            puVar9 = (ulong *)((long)puVar8 + -4);
            bVar1 = 7 < (long)puVar8;
            puVar8 = puVar9;
            puVar11 = puVar10;
          } while (bVar1);
        }
        *param_1 = (ulong)puVar10;
        local_108 = puVar14;
        puStack_100 = puVar9;
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar5,0,0);
        *puVar5 = 1;
        _swift_willThrow();
        FUN_100506304(&local_108);
        return;
      }
LAB_1004ff6d0:
      *param_1 = (ulong)puVar10;
      puStack_100 = (ulong *)0x0;
      local_108 = puVar14;
      FUN_100506304(&local_108);
      *(undefined1 *)(unaff_x20 + 4) = 1;
      return;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x05') {
      return;
    }
    if (3 < unaff_x20[1]) {
      uVar2 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -4;
      uVar12 = *param_1;
      uVar4 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar12;
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
        (*param_2)(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      }
      uVar4 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        (*param_2)(uVar12,uVar4 + 1,1,uVar6);
        uVar6 = uVar12;
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      *(undefined4 *)(uVar6 + uVar4 * 4 + 0x20) = uVar2;
      *param_1 = uVar6;
      *(undefined1 *)(unaff_x20 + 4) = 1;
      return;
    }
  }
  FUN_100506290();
  _swift_allocError(&DAT_1009cdf18,puVar9,0,0);
  uVar7 = 1;
LAB_1004ff69c:
  *(undefined1 *)puVar9 = uVar7;
  _swift_willThrow();
  return;
}

