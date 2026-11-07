// rea decompile_all
// name: FUN_1003c1558
// address: 0x1003c1558
// body: available
// range: 0x1003c1558-0x1003c175f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c1558(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  code *local_98;
  long local_90;
  long local_88;
  long lStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_98 = param_4;
  __s10Foundation4DateVMa();
  local_88 = *(long *)(lVar6 + -8);
  lStack_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar9 < 0x40) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  local_90 = param_3;
  do {
    lVar3 = lStack_80;
    lVar2 = local_88;
    if (uVar10 == 0) {
      do {
        lVar11 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c1760);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          FUN_10040a67c(local_b0,local_b8,local_a8,local_90);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      local_78 = uVar10 - 1 & uVar10;
      local_a0 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar11 * 0x40;
    }
    else {
      uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      local_78 = uVar10 - 1 & uVar10;
      local_a0 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar6 << 6;
      lVar11 = lVar6;
    }
    puVar7 = (undefined8 *)(*(long *)(local_90 + 0x30) + local_a0 * 0x10);
    local_70 = *puVar7;
    uVar1 = puVar7[1];
    uStack_68 = uVar1;
    (**(code **)(local_88 + 0x10))
              (puVar12,*(long *)(local_90 + 0x38) + *(long *)(local_88 + 0x48) * local_a0,lStack_80)
    ;
    _swift_bridgeObjectRetain(uVar1);
    puVar7 = &local_70;
    (*local_98)(puVar7,puVar12);
    if (unaff_x21 != 0) {
      (**(code **)(lVar2 + 8))(puVar12,lVar3);
      _swift_bridgeObjectRelease(uVar1);
      return;
    }
    (**(code **)(lVar2 + 8))(puVar12,lVar3);
    _swift_bridgeObjectRelease(uVar1);
    uVar10 = local_78;
    lVar6 = lVar11;
    if (((ulong)puVar7 & 1) != 0) {
      uVar8 = local_a0 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(local_b0 + uVar8) = *(ulong *)(local_b0 + uVar8) | 1L << (local_a0 & 0x3f);
      bVar5 = SCARRY8(local_a8,1);
      local_a8 = local_a8 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c170c);
        (*pcVar4)();
      }
    }
  } while( true );
}

