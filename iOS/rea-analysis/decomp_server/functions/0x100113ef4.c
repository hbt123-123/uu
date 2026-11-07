// rea decompile_all
// name: FUN_100113ef4
// address: 0x100113ef4
// body: available
// range: 0x100113ef4-0x10011439f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100113ef4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  FUN_100113da0();
  puVar6 = PTR___sypN_100995e88;
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100113f94:
    lVar10 = *(long *)(param_1 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    uVar13 = 0;
    puVar4 = &DAT_d000000000000010;
    FUN_1001a2c70(&DAT_d000000000000010);
    if ((uVar13 & 1) != 0) {
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + (long)puVar4 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(param_1);
      ppuVar5 = &local_90;
      _swift_dynamicCast(ppuVar5,auStack_80,puVar6 + 8,PTR___sSSN_1009957f8,6);
      if (((ulong)ppuVar5 & 1) != 0) goto LAB_100114014;
      goto LAB_100113f94;
    }
    _swift_bridgeObjectRelease(param_1);
    lVar10 = *(long *)(param_1 + 0x10);
  }
  if (lVar10 != 0) {
    _swift_bridgeObjectRetain(param_1);
    uVar13 = 0;
    puVar4 = &DAT_d000000000000010;
    FUN_1001a2c70(&DAT_d000000000000010);
    if ((uVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + (long)puVar4 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(param_1);
      ppuVar5 = &local_90;
      _swift_dynamicCast(ppuVar5,auStack_80,puVar6 + 8,PTR___sSSN_1009957f8,6);
      if (((ulong)ppuVar5 & 1) != 0) {
LAB_100114014:
        _swift_bridgeObjectRelease(param_1);
        puVar6 = &DAT_100a750f8;
        FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
        _swift_allocObject();
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        *(undefined **)(puVar6 + 0x20) = local_90;
        *(undefined8 *)(puVar6 + 0x28) = uStack_88;
        return;
      }
    }
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar10 = 0;
  do {
    while (uVar13 == 0) {
      bVar3 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001143a0);
        (*pcVar2)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar10) {
        _swift_bridgeObjectRelease(param_1);
        _swift_release(param_1);
        return;
      }
      uVar13 = ((ulong *)(param_1 + 0x40))[lVar10];
    }
    uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar13 - 1 & uVar13;
    plVar1 = (long *)(*(long *)(param_1 + 0x30) +
                     (lVar10 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4));
    lVar11 = *plVar1;
    puVar8 = (undefined *)plVar1[1];
    _swift_bridgeObjectRetain(puVar8);
    uVar7 = 0x656c646e75424643;
    __sSS9hasPrefixySbSSF(0x656c646e75424643,0xed0000736e6f6349,lVar11,puVar8);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_1001142f0;
      _swift_bridgeObjectRetain(param_1);
      puVar9 = puVar8;
      FUN_1001a2c70(lVar11);
      _swift_bridgeObjectRelease(puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
LAB_100114318:
        lVar11 = *(long *)(puVar6 + 0x10);
        puVar8 = puVar6;
      }
      else {
        FUN_10003e8bc(*(long *)(param_1 + 0x38) + lVar11 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(param_1);
        puVar8 = &DAT_100a759d8;
        FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
        ppuVar5 = &local_90;
        _swift_dynamicCast(ppuVar5,auStack_80,PTR___sypN_100995e88 + 8,puVar8,6);
        puVar9 = local_90;
        if (((ulong)ppuVar5 & 1) == 0) goto LAB_100114318;
        if (*(long *)(local_90 + 0x10) == 0) {
          _swift_bridgeObjectRelease(local_90);
          goto LAB_100114318;
        }
        puVar4 = &DAT_d000000000000013;
        uVar7 = 0;
        FUN_1001a2c70(&DAT_d000000000000013);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar9);
          goto LAB_100114318;
        }
        FUN_10003e8bc(*(long *)(puVar9 + 0x38) + (long)puVar4 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(puVar9);
        ppuVar5 = &local_90;
        _swift_dynamicCast(ppuVar5,auStack_80,PTR___sypN_100995e88 + 8,puVar8,6);
        puVar8 = local_90;
        if (((ulong)ppuVar5 & 1) == 0) goto LAB_100114318;
        if (*(long *)(local_90 + 0x10) == 0) {
LAB_1001142f0:
          _swift_bridgeObjectRelease(puVar8);
          goto LAB_100114318;
        }
        lVar11 = -0x2fffffffffffffef;
        uVar7 = 0;
        FUN_1001a2c70(0xd000000000000011);
        if ((uVar7 & 1) == 0) goto LAB_1001142f0;
        FUN_10003e8bc(*(long *)(puVar8 + 0x38) + lVar11 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(puVar8);
        puVar8 = &DAT_100a756e8;
        FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
        ppuVar5 = &local_90;
        _swift_dynamicCast(ppuVar5,auStack_80,PTR___sypN_100995e88 + 8,puVar8,6);
        if (((ulong)ppuVar5 & 1) == 0) goto LAB_100114318;
        lVar11 = *(long *)(local_90 + 0x10);
        puVar8 = local_90;
      }
      if (lVar11 != 0) {
        _swift_release(param_1);
        _swift_bridgeObjectRelease(param_1);
        return;
      }
    }
    _swift_bridgeObjectRelease(puVar8);
  } while( true );
}

