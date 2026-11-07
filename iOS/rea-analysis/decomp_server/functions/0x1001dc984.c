// rea decompile_all
// name: FUN_1001dc984
// address: 0x1001dc984
// body: available
// range: 0x1001dc984-0x1001dcb43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dc984(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_90 [2];
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  puVar2 = PTR___ss6UInt32VN_100995dc0;
  puVar1 = PTR___sSSN_1009957f8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    plVar11 = (long *)(param_1 + 0x20);
    puVar9 = PTR___sypN_100995e88;
    do {
      lVar8 = *plVar11;
      if (*(long *)(lVar8 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar8);
        uVar7 = 0xea00000000006469;
        lVar5 = 0x5f6e6f6973736573;
        FUN_1001a2c70(0x5f6e6f6973736573);
        if ((uVar7 & 1) != 0) {
          FUN_10003e8bc(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,auStack_80);
          uVar7 = 0;
          _swift_dynamicCast(local_90,auStack_80,puVar9 + 8,puVar2,6);
          uVar3 = local_90[0];
          if (((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
            uVar7 = 0;
            lVar5 = 0x6574617473;
            FUN_1001a2c70(0x6574617473);
            if ((uVar7 & 1) != 0) {
              FUN_10003e8bc(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,auStack_80);
              _swift_bridgeObjectRelease(lVar8);
              uVar7 = 0;
              _swift_dynamicCast(local_90,auStack_80,puVar9 + 8,puVar1,6);
              uVar4 = uStack_88;
              if ((uVar7 & 1) != 0) {
                puVar6 = &DAT_100a75458;
                FUN_100004bb4(&DAT_100a75458,&DAT_1008095f0);
                _swift_initStaticObject();
                __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
                puVar9 = PTR___sypN_100995e88;
                _swift_bridgeObjectRelease(uVar4);
                if (puVar6 < (undefined *)0x3) {
                  FUN_1001d9d5c(uVar3,puVar6);
                }
              }
              goto LAB_1001dc9f4;
            }
          }
        }
        _swift_bridgeObjectRelease(lVar8);
      }
LAB_1001dc9f4:
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

