// rea decompile_all
// name: FUN_10012a038
// address: 0x10012a038
// body: available
// range: 0x10012a038-0x10012a21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012a038(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined4 *puVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  long local_98;
  code *local_90;
  long local_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  undefined4 local_54;
  
  lVar5 = 0;
  local_a8 = param_2;
  local_a0 = param_1;
  local_90 = param_4;
  __s10Foundation4DateVMa();
  local_80 = *(long *)(lVar5 + -8);
  lStack_78 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_80 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar9 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x40);
  lVar5 = 0;
  local_88 = param_3;
  do {
    lVar2 = lStack_78;
    lVar1 = local_80;
    if (uVar9 == 0) {
      do {
        lVar11 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10012a220);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          FUN_10012a628(local_a0,local_a8,local_98,local_88);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar5 = lVar5 + 1;
      } while (uVar9 == 0);
      uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      local_70 = uVar9 - 1 & uVar9;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar11 * 0x40;
    }
    else {
      uVar10 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      local_70 = uVar9 - 1 & uVar9;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar5 << 6;
      lVar11 = lVar5;
    }
    local_54 = *(undefined4 *)(*(long *)(local_88 + 0x30) + uVar10 * 4);
    (**(code **)(local_80 + 0x10))
              (puVar12,*(long *)(local_88 + 0x38) + *(long *)(local_80 + 0x48) * uVar10,lStack_78);
    puVar6 = &local_54;
    (*local_90)(puVar6,puVar12);
    if (unaff_x21 != 0) {
      (**(code **)(lVar1 + 8))(puVar12,lVar2);
      return;
    }
    (**(code **)(lVar1 + 8))(puVar12,lVar2);
    uVar9 = local_70;
    lVar5 = lVar11;
    if (((ulong)puVar6 & 1) != 0) {
      uVar7 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(local_a0 + uVar7) = *(ulong *)(local_a0 + uVar7) | 1L << (uVar10 & 0x3f);
      bVar4 = SCARRY8(local_98,1);
      local_98 = local_98 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10012a1d4);
        (*pcVar3)();
      }
    }
  } while( true );
}

