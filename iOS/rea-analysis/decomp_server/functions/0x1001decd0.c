// rea decompile_all
// name: FUN_1001decd0
// address: 0x1001decd0
// body: available
// range: 0x1001decd0-0x1001deee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001decd0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  long local_58;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    plVar8 = (long *)(lVar6 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar11 = *(long *)(lVar6 + param_3 * 8);
      plVar9 = plVar8;
      lVar10 = param_1;
      do {
        lVar12 = *plVar9;
        lVar7 = *(long *)(lVar11 + 0x10);
        _swift_bridgeObjectRetain(lVar11);
        _swift_bridgeObjectRetain(lVar12);
        if ((lVar7 == 0) ||
           (lVar7 = 0x5f64657461657263, uVar5 = 0xed0000736d5f7461,
           FUN_1001a2c70(0x5f64657461657263), (uVar5 & 1) == 0)) {
LAB_1001dee10:
          lVar7 = 0;
          if (*(long *)(lVar12 + 0x10) == 0) goto LAB_1001dedf0;
LAB_1001dee1c:
          _swift_bridgeObjectRetain(lVar12);
          lVar4 = 0x5f64657461657263;
          uVar5 = 0xed0000736d5f7461;
          FUN_1001a2c70(0x5f64657461657263);
          if ((uVar5 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar11);
            _swift_bridgeObjectRelease_n(lVar12,2);
            goto joined_r0x0001001deec4;
          }
          FUN_10003e8bc(*(long *)(lVar12 + 0x38) + lVar4 * 0x20,auStack_80);
          _swift_bridgeObjectRelease(lVar12);
          plVar3 = &local_58;
          _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                            );
          lVar4 = local_58;
          if (((ulong)plVar3 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar11);
            _swift_bridgeObjectRelease(lVar12);
            goto joined_r0x0001001deec4;
          }
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar12);
          if (lVar7 <= lVar4) break;
        }
        else {
          FUN_10003e8bc(*(long *)(lVar11 + 0x38) + lVar7 * 0x20,auStack_80);
          plVar3 = &local_58;
          _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_100995e88 + 8,PTR___ss5Int64VN_100995cc0,6
                            );
          if ((int)plVar3 == 0) goto LAB_1001dee10;
          lVar7 = local_58;
          if (*(long *)(lVar12 + 0x10) != 0) goto LAB_1001dee1c;
LAB_1001dedf0:
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar12);
joined_r0x0001001deec4:
          if (lVar7 < 1) break;
        }
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001deee4);
          (*pcVar1)();
        }
        lVar7 = *plVar9;
        lVar11 = plVar9[1];
        *plVar9 = lVar11;
        plVar9[1] = lVar7;
        bVar2 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar8 = plVar8 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}

