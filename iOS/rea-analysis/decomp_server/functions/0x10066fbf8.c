// rea decompile_all
// name: FUN_10066fbf8
// address: 0x10066fbf8
// body: available
// range: 0x10066fbf8-0x10066ff8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10066fbf8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  byte local_90;
  ulong local_80;
  ulong uStack_78;
  byte local_70;
  undefined *local_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar10 = param_1 - 1;
  uVar11 = uVar10 >> 6;
  uVar12 = 1L << (uVar10 & 0x3f);
  if ((long)param_1 < 2) goto LAB_10066fcf8;
  do {
    uVar8 = (uint)param_3;
    uVar5 = uVar10;
    FUN_100655374();
    local_90 = (byte)uVar8;
    local_98 = param_2;
    local_a0 = uVar5;
    if ((uVar8 & 0xff) == 0) {
      if (uVar11 == 0) {
        local_a0 = uVar5 | uVar12;
      }
      else {
        if (uVar11 != 1) goto LAB_10066fd64;
        local_98 = param_2 | uVar12;
      }
      local_90 = 0;
      uVar5 = local_a0;
    }
    else {
      if ((uVar8 & 0xff) == 1) {
        uVar1 = param_2 - uVar5;
        if (SBORROW8(param_2,uVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff6c);
          (*pcVar4)();
        }
        if ((long)uVar1 <= (long)uVar11) {
LAB_10066fd64:
          FUN_100646ccc(uVar11 + 1);
          lVar2 = uVar11 - *(ulong *)(param_4 + 0x10);
          if (uVar11 < *(ulong *)(param_4 + 0x10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff64);
            (*pcVar4)();
          }
          if (lVar2 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff68);
            (*pcVar4)();
          }
          FUN_10062872c(lVar2,0);
          puVar6 = param_4;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar7 = param_4;
          if (((ulong)puVar6 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            FUN_10062958c(0,*(long *)(param_4 + 0x10) + 1,1,param_4);
          }
          uVar13 = *(ulong *)(puVar7 + 0x10);
          param_4 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
            param_4 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            FUN_10062958c(param_4,uVar13 + 1,1,puVar7);
          }
          *(ulong *)(param_4 + 0x10) = uVar13 + 1;
          *(ulong *)(param_4 + uVar13 * 8 + 0x20) = uVar12;
          goto LAB_10066fdd4;
        }
        uVar13 = uVar5 + uVar11;
        if (SCARRY8(uVar5,uVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff74);
          (*pcVar4)();
        }
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff78);
          (*pcVar4)();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff7c);
          (*pcVar4)();
        }
        uVar13 = *(ulong *)(param_4 + uVar13 * 8 + 0x20);
        local_a0 = 0;
        local_98 = 0;
        local_90 = 2;
        if ((long)param_2 < (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff80);
          (*pcVar4)();
        }
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff84);
          (*pcVar4)();
        }
        uVar9 = *(ulong *)(param_4 + 0x10);
        if ((uVar9 < uVar5) || ((long)uVar9 < (long)param_2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff88);
          (*pcVar4)();
        }
        if (uVar9 != uVar1) {
          local_a8 = puVar3;
          if (param_2 != uVar5) {
            if (0 < (long)uVar1) {
              local_a8 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar7 = local_a8;
              _malloc_size();
              puVar6 = puVar7 + -0x19;
              if (0x1f < (long)puVar7) {
                puVar6 = puVar7 + -0x20;
              }
              *(ulong *)(local_a8 + 0x10) = uVar1;
              *(long *)(local_a8 + 0x18) = ((long)puVar6 >> 3) << 1;
            }
            _memcpy(local_a8 + 0x20,param_4 + uVar5 * 8 + 0x20,uVar1 * 8);
          }
          _swift_bridgeObjectRelease(param_4);
          param_4 = local_a8;
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff8c);
          (*pcVar4)();
        }
        puVar6 = param_4;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1006541a4();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff90);
          (*pcVar4)();
        }
      }
      else {
        if (*(ulong *)(param_4 + 0x10) <= uVar11) goto LAB_10066fd64;
        uVar13 = *(ulong *)(param_4 + uVar11 * 8 + 0x20);
        puVar6 = param_4;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1006541a4();
        }
        if (*(ulong *)(param_4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff70);
          (*pcVar4)();
        }
      }
      *(ulong *)(param_4 + uVar11 * 8 + 0x20) = uVar13 | uVar12;
      uVar5 = local_a0;
    }
LAB_10066fdd4:
    while( true ) {
      local_80 = uVar5;
      uStack_78 = local_98;
      local_70 = local_90;
      local_68 = param_4;
      FUN_100647e98(&local_80,1,0,0,puVar3);
      puVar6 = local_68;
      uVar13 = local_80;
      param_4 = (undefined *)(ulong)local_70;
      uVar5 = 0;
      param_2 = local_80;
      param_3 = uStack_78;
      FUN_100654b0c();
      if ((uVar5 & 1) != 0) {
        return uVar13;
      }
      _swift_bridgeObjectRelease(puVar6);
      if (1 < (long)param_1) break;
LAB_10066fcf8:
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10066ff60);
        (*pcVar4)();
      }
      local_98 = 0;
      local_90 = 0;
      uVar5 = param_1;
      param_4 = puVar3;
    }
  } while( true );
}

