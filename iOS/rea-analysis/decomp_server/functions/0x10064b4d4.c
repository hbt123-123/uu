// rea decompile_all
// name: FUN_10064b4d4
// address: 0x10064b4d4
// body: available
// range: 0x10064b4d4-0x10064b85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064b4d4(ulong *param_1,byte *param_2,long param_3,long *param_4,long param_5,
                  ulong *param_6,ulong *param_7)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if ((param_2 == (byte *)0x0) || (param_3 = param_3 - (long)param_2, param_3 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar8 = *param_4;
    do {
      bVar4 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b82c);
        (*pcVar3)();
      }
      uVar12 = (ulong)*param_2 | uVar12 << 8;
      *param_4 = lVar8;
      if (lVar8 == param_5) {
        uVar13 = *param_7;
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b830);
          (*pcVar3)();
        }
        if ((char)param_6[2] == '\0') {
          if (uVar13 == 0) {
            *param_6 = uVar12;
          }
          else {
            if (uVar13 != 1) goto LAB_10064b6cc;
            param_6[1] = uVar12;
          }
          *(undefined1 *)(param_6 + 2) = 0;
        }
        else {
          if ((char)param_6[2] == '\x01') {
            uVar5 = *param_6;
            uVar11 = param_6[1];
            uVar2 = uVar11 - uVar5;
            if (SBORROW8(uVar11,uVar5)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b838);
              (*pcVar3)();
            }
            if ((long)uVar2 <= (long)uVar13) {
LAB_10064b6cc:
              if (uVar12 != 0) {
                if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b83c);
                  (*pcVar3)();
                }
                FUN_100646ccc(uVar13 + 1);
                lVar8 = uVar13 - *(ulong *)(param_6[3] + 0x10);
                if (uVar13 < *(ulong *)(param_6[3] + 0x10)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b840);
                  (*pcVar3)();
                }
                if (lVar8 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b844);
                  (*pcVar3)();
                }
                FUN_10062872c(lVar8,0);
                uVar11 = param_6[3];
                uVar13 = uVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                param_6[3] = uVar11;
                uVar5 = uVar11;
                if ((uVar13 & 1) == 0) {
                  uVar5 = 0;
                  FUN_10062958c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
                  param_6[3] = uVar5;
                }
                uVar13 = *(ulong *)(uVar5 + 0x10);
                uVar11 = uVar5;
                if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
                  uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
                  FUN_10062958c(uVar11,uVar13 + 1,1,uVar5);
                  param_6[3] = uVar11;
                }
                *(ulong *)(uVar11 + 0x10) = uVar13 + 1;
                *(ulong *)(uVar11 + uVar13 * 8 + 0x20) = uVar12;
              }
              goto LAB_10064b558;
            }
            *param_6 = 0;
            param_6[1] = 0;
            *(undefined1 *)(param_6 + 2) = 2;
            if ((long)uVar11 < (long)uVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b84c);
              (*pcVar3)();
            }
            if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b850);
              (*pcVar3)();
            }
            puVar10 = (undefined *)param_6[3];
            uVar9 = *(ulong *)(puVar10 + 0x10);
            if ((uVar9 < uVar5) || ((long)uVar9 < (long)uVar11)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b854);
              (*pcVar3)();
            }
            if (uVar9 == uVar2) {
              _swift_bridgeObjectRetain(puVar10);
              puVar6 = puVar10;
            }
            else {
              puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
              if (uVar11 != uVar5) {
                puVar6 = &DAT_100ab7e10;
                FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                _swift_allocObject();
                puVar7 = puVar6;
                _malloc_size();
                puVar1 = puVar7 + -0x19;
                if (0x1f < (long)puVar7) {
                  puVar1 = puVar7 + -0x20;
                }
                *(ulong *)(puVar6 + 0x10) = uVar2;
                *(long *)(puVar6 + 0x18) = ((long)puVar1 >> 3) << 1;
                _memcpy(puVar6 + 0x20,puVar10 + uVar5 * 8 + 0x20,uVar2 * 8);
              }
            }
            uVar5 = param_6[3];
            param_6[3] = (ulong)puVar6;
            _swift_bridgeObjectRelease(uVar5);
            uVar5 = param_6[3];
            if (*(ulong *)(uVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b858);
              (*pcVar3)();
            }
            uVar11 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            param_6[3] = uVar5;
            if ((uVar11 & 1) == 0) {
              FUN_1006541a4();
              param_6[3] = uVar5;
            }
            if (*(ulong *)(uVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b85c);
              (*pcVar3)();
            }
          }
          else {
            uVar5 = param_6[3];
            if (*(ulong *)(uVar5 + 0x10) <= uVar13) goto LAB_10064b6cc;
            uVar11 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            param_6[3] = uVar5;
            if ((uVar11 & 1) == 0) {
              FUN_1006541a4();
              param_6[3] = uVar5;
            }
            if (*(ulong *)(uVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b848);
              (*pcVar3)();
            }
          }
          *(ulong *)(uVar5 + uVar13 * 8 + 0x20) = uVar12;
          if ((uVar12 == 0) && (uVar13 == *(long *)(param_6[3] + 0x10) - 1U)) {
            FUN_100645d2c();
          }
        }
LAB_10064b558:
        if (SBORROW8(*param_7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064b834);
          (*pcVar3)();
        }
        lVar8 = 0;
        uVar12 = 0;
        *param_7 = *param_7 - 1;
        *param_4 = 0;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = uVar12;
  return;
}

