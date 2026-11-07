// rea decompile_all
// name: FUN_100511c8c
// address: 0x100511c8c
// body: available
// range: 0x100511c8c-0x100511ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100511c8c(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 local_e0;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar9 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
  uVar8 = uVar8 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar6 = 0;
  lVar3 = lVar6;
  if (uVar9 == 0) goto LAB_100511d0c;
LAB_100511d38:
  uVar7 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar9 = uVar9 - 1 & uVar9;
  uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar3 << 6;
  local_d0 = *(long *)(*(long *)(param_1 + 0x30) + uVar7 * 8);
  FUN_1000b142c(*(long *)(param_1 + 0x38) + uVar7 * 0x28,&uStack_c8);
  lVar6 = lVar3;
  do {
    lVar3 = local_d0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    uStack_78 = uStack_a8;
    local_80 = lStack_b0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    if (lStack_b0 == 0) {
      _swift_release(param_1);
      return 1;
    }
    uVar7 = 0;
    thunk_FUN_1000a0074(&uStack_98);
    if ((*(long *)(param_2 + 0x10) == 0) || (FUN_1003618e4(lVar3), (uVar7 & 1) == 0)) {
LAB_100511e70:
      _swift_release(param_1);
LAB_100511e9c:
      FUN_10003f094(&local_d0);
      return 0;
    }
    FUN_1000b142c(*(long *)(param_2 + 0x38) + lVar3 * 0x28,auStack_120);
    thunk_FUN_1000a0074(auStack_120,alStack_f8);
    plVar4 = &local_d0;
    FUN_10003f030(plVar4,uStack_b8);
    _swift_getDynamicType();
    plVar5 = alStack_f8;
    FUN_10003f030(plVar5,local_e0);
    _swift_getDynamicType();
    lVar3 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar4 != plVar5) {
      _swift_release(param_1);
      FUN_10003f094(alStack_f8);
      goto LAB_100511e9c;
    }
    FUN_10003f030(&local_d0,uStack_b8);
    plVar4 = alStack_f8;
    (**(code **)(lVar3 + 0x20))(plVar4,uVar1,lVar3);
    FUN_10003f094(alStack_f8);
    if (((ulong)plVar4 & 1) == 0) goto LAB_100511e70;
    FUN_10003f094(&local_d0);
    lVar3 = lVar6;
    if (uVar9 != 0) goto LAB_100511d38;
LAB_100511d0c:
    uVar7 = uVar8;
    if ((long)uVar8 <= lVar6 + 1) {
      uVar7 = lVar6 + 1;
    }
    while( true ) {
      lVar3 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100511ecc);
        (*pcVar2)();
      }
      if ((long)uVar8 <= lVar3) break;
      uVar9 = ((ulong *)(param_1 + 0x40))[lVar3];
      lVar6 = lVar6 + 1;
      if (uVar9 != 0) goto LAB_100511d38;
    }
    uVar9 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    lVar6 = uVar7 - 1;
  } while( true );
}

