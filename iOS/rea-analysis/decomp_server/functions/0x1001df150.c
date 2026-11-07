// rea decompile_all
// name: FUN_1001df150
// address: 0x1001df150
// body: available
// range: 0x1001df150-0x1001df647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001df150(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_80 [32];
  long local_58;
  
  lVar6 = (long)param_2 - (long)param_1;
  lVar8 = lVar6 + 7;
  if (-1 < lVar6) {
    lVar8 = lVar6;
  }
  lVar8 = lVar8 >> 3;
  lVar7 = (long)param_3 - (long)param_2;
  lVar10 = lVar7 + 7;
  if (-1 < lVar7) {
    lVar10 = lVar7;
  }
  lVar10 = lVar10 >> 3;
  if (lVar8 < lVar10) {
    if ((param_4 != param_1) || (param_1 + lVar8 <= param_4)) {
      _memmove(param_4,param_1,lVar8 << 3);
    }
    plVar11 = param_4 + lVar8;
    plVar2 = param_1;
    if (7 < lVar6) {
      do {
        plVar2 = param_1;
        if (param_3 <= param_2) break;
        lVar10 = *param_2;
        lVar8 = *param_4;
        lVar6 = *(long *)(lVar10 + 0x10);
        _swift_bridgeObjectRetain(lVar10);
        _swift_bridgeObjectRetain(lVar8);
        if (lVar6 == 0) {
LAB_1001df2d0:
          lVar6 = 0;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1001df2b8;
LAB_1001df2dc:
          _swift_bridgeObjectRetain(lVar8);
          lVar7 = 0x5f64657461657263;
          uVar3 = 0xed0000736d5f7461;
          FUN_1001a2c70(0x5f64657461657263);
          if ((uVar3 & 1) != 0) {
            FUN_10003e8bc(*(long *)(lVar8 + 0x38) + lVar7 * 0x20,auStack_80);
            _swift_bridgeObjectRelease(lVar8);
            plVar1 = &local_58;
            _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0
                               ,6);
            lVar7 = local_58;
            if (((ulong)plVar1 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar10);
              _swift_bridgeObjectRelease(lVar8);
              goto LAB_1001df3a0;
            }
            _swift_bridgeObjectRelease(lVar10);
            _swift_bridgeObjectRelease(lVar8);
            goto LAB_1001df364;
          }
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease_n(lVar8,2);
LAB_1001df3a0:
          if (lVar6 < 1) goto LAB_1001df1f0;
LAB_1001df3b0:
          plVar2 = param_2 + 1;
          plVar9 = param_4;
          plVar1 = param_2;
        }
        else {
          lVar6 = 0x5f64657461657263;
          uVar3 = 0xed0000736d5f7461;
          FUN_1001a2c70(0x5f64657461657263);
          if ((uVar3 & 1) == 0) goto LAB_1001df2d0;
          FUN_10003e8bc(*(long *)(lVar10 + 0x38) + lVar6 * 0x20,auStack_80);
          plVar1 = &local_58;
          _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                            );
          if ((int)plVar1 == 0) goto LAB_1001df2d0;
          lVar6 = local_58;
          if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1001df2dc;
LAB_1001df2b8:
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(lVar8);
          lVar7 = 0;
LAB_1001df364:
          if (lVar7 < lVar6) goto LAB_1001df3b0;
LAB_1001df1f0:
          plVar2 = param_2;
          plVar9 = param_4 + 1;
          plVar1 = param_4;
        }
        param_4 = plVar9;
        param_2 = plVar2;
        if (param_1 != plVar1) {
          *param_1 = *plVar1;
        }
        param_1 = param_1 + 1;
        plVar2 = param_1;
      } while (param_4 < plVar11);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar10 <= param_4)) {
      _memmove(param_4,param_2,lVar10 << 3);
    }
    plVar1 = param_4 + lVar10;
    plVar11 = plVar1;
    plVar2 = param_2;
    if ((7 < lVar7) && (param_1 < param_2)) {
LAB_1001df404:
      plVar5 = param_2 + -1;
      plVar9 = param_3;
      do {
        param_3 = plVar9 + -1;
        plVar11 = plVar1 + -1;
        lVar10 = *plVar11;
        lVar8 = *plVar5;
        lVar6 = *(long *)(lVar10 + 0x10);
        _swift_bridgeObjectRetain(lVar10);
        _swift_bridgeObjectRetain(lVar8);
        if (lVar6 == 0) {
LAB_1001df4c0:
          lVar6 = 0;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1001df558;
LAB_1001df4cc:
          _swift_bridgeObjectRetain(lVar8);
          lVar7 = 0x5f64657461657263;
          uVar3 = 0xed0000736d5f7461;
          FUN_1001a2c70(0x5f64657461657263);
          if ((uVar3 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar10);
            _swift_bridgeObjectRelease_n(lVar8,2);
            goto LAB_1001df580;
          }
          FUN_10003e8bc(*(long *)(lVar8 + 0x38) + lVar7 * 0x20,auStack_80);
          _swift_bridgeObjectRelease(lVar8);
          plVar2 = &local_58;
          _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                            );
          lVar7 = local_58;
          if (((ulong)plVar2 & 1) == 0) goto LAB_1001df558;
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(lVar8);
        }
        else {
          lVar6 = 0x5f64657461657263;
          uVar3 = 0xed0000736d5f7461;
          FUN_1001a2c70(0x5f64657461657263);
          if ((uVar3 & 1) == 0) goto LAB_1001df4c0;
          FUN_10003e8bc(*(long *)(lVar10 + 0x38) + lVar6 * 0x20,auStack_80);
          plVar2 = &local_58;
          _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                            );
          if ((int)plVar2 == 0) goto LAB_1001df4c0;
          lVar6 = local_58;
          if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1001df4cc;
LAB_1001df558:
          _swift_bridgeObjectRelease(lVar10);
          _swift_bridgeObjectRelease(lVar8);
LAB_1001df580:
          lVar7 = 0;
        }
        if (lVar7 < lVar6) goto LAB_1001df5b0;
        if (plVar9 != plVar1) {
          *param_3 = *plVar11;
        }
        plVar1 = plVar11;
        plVar2 = param_2;
        plVar9 = param_3;
        if (plVar11 <= param_4) break;
      } while( true );
    }
  }
LAB_1001df5e4:
  uVar4 = (long)plVar11 - (long)param_4;
  uVar3 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar3 = uVar4;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar3 & 0xfffffffffffffff8)) <= plVar2)) {
    _memmove(plVar2,param_4,((long)uVar3 >> 3) << 3);
  }
  return 1;
LAB_1001df5b0:
  if (plVar9 != param_2) {
    *param_3 = *plVar5;
  }
  plVar11 = plVar1;
  plVar2 = plVar5;
  if ((plVar1 <= param_4) || (param_2 = plVar5, plVar5 <= param_1)) goto LAB_1001df5e4;
  goto LAB_1001df404;
}

