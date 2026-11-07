// rea decompile_all
// name: FUN_1006489ac
// address: 0x1006489ac
// body: available
// range: 0x1006489ac-0x100648da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006489ac(ulong *param_1,ulong param_2,ulong param_3,char param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_a0;
  
  uVar9 = *param_1;
  uVar6 = param_1[1];
  if ((char)param_1[2] == '\0') {
    uVar5 = (ulong)(uVar9 != 0);
    if (uVar6 != 0) {
      uVar5 = 2;
    }
LAB_100648a14:
    if (param_4 != '\0') goto LAB_100648a1c;
LAB_100648a44:
    if (param_3 != 0) {
      if ((long)uVar5 < 3) {
        uVar5 = 2;
      }
      goto LAB_100648a6c;
    }
    if (param_2 != 0) {
      if ((long)uVar5 < 2) {
        uVar5 = 1;
      }
      goto LAB_100648a6c;
    }
    uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  }
  else {
    if ((char)param_1[2] == '\x01') {
      uVar5 = uVar6 - uVar9;
      if (SBORROW8(uVar6,uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100648a00);
        (*pcVar2)();
      }
      goto LAB_100648a14;
    }
    uVar5 = *(ulong *)(param_1[3] + 0x10);
    if (param_4 == '\0') goto LAB_100648a44;
LAB_100648a1c:
    if (param_4 == '\x01') {
      uVar9 = param_3 - param_2;
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100648a34);
        (*pcVar2)();
      }
    }
    else {
      uVar9 = *(ulong *)(param_5 + 0x10);
    }
    if ((long)uVar9 <= (long)uVar5) {
      uVar9 = uVar5;
    }
    uVar5 = uVar9;
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100648da8);
      (*pcVar2)();
    }
  }
  if (uVar5 == 0) {
    return;
  }
LAB_100648a6c:
  lVar12 = 4;
  do {
    uVar9 = lVar12 - 4;
    if (param_4 == '\0') {
      uVar6 = param_3;
      if (uVar9 != 1) {
        uVar6 = 0;
      }
      uVar13 = param_2;
      if (uVar9 != 0) {
        uVar13 = uVar6;
      }
    }
    else if (param_4 == '\x01') {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d70);
        (*pcVar2)();
      }
      if ((long)uVar9 < (long)(param_3 - param_2)) {
        uVar6 = param_2 + uVar9;
        if (SCARRY8(param_2,uVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d7c);
          (*pcVar2)();
        }
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d84);
          (*pcVar2)();
        }
        if (*(ulong *)(param_5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d8c);
          (*pcVar2)();
        }
        uVar13 = *(ulong *)(param_5 + 0x20 + uVar6 * 8);
      }
      else {
LAB_100648b34:
        uVar13 = 0;
      }
    }
    else {
      if (*(ulong *)(param_5 + 0x10) <= uVar9) goto LAB_100648b34;
      uVar13 = *(ulong *)(param_5 + lVar12 * 8);
    }
    uVar6 = *param_1;
    uVar7 = param_1[1];
    if ((char)param_1[2] == '\0') {
      if (uVar9 == 0) {
        *param_1 = uVar6 & uVar13;
      }
      else {
        if (uVar9 != 1) goto LAB_100648aa8;
        param_1[1] = uVar7 & uVar13;
      }
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      puVar11 = (undefined *)param_1[3];
      if ((char)param_1[2] == '\x01') {
        uVar1 = uVar7 - uVar6;
        if (SBORROW8(uVar7,uVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d74);
          (*pcVar2)();
        }
        if ((long)uVar9 < (long)uVar1) {
          uVar10 = uVar6 + uVar9;
          if (SCARRY8(uVar6,uVar9)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d80);
            (*pcVar2)();
          }
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d88);
            (*pcVar2)();
          }
          if (*(ulong *)(puVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d90);
            (*pcVar2)();
          }
          uVar10 = *(ulong *)(puVar11 + uVar10 * 8 + 0x20);
          *param_1 = 0;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 2) = 2;
          if ((long)uVar7 < (long)uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d94);
            (*pcVar2)();
          }
          if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d98);
            (*pcVar2)();
          }
          uVar8 = *(ulong *)(puVar11 + 0x10);
          if ((uVar8 < uVar6) || ((long)uVar8 < (long)uVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d9c);
            (*pcVar2)();
          }
          local_a0 = puVar11;
          if (uVar8 != uVar1) {
            local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
            if (uVar7 != uVar6) {
              if (0 < (long)uVar1) {
                local_a0 = &DAT_100ab7e10;
                FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
                _swift_allocObject();
                puVar4 = local_a0;
                _malloc_size();
                puVar3 = puVar4 + -0x19;
                if (0x1f < (long)puVar4) {
                  puVar3 = puVar4 + -0x20;
                }
                *(ulong *)(local_a0 + 0x10) = uVar1;
                *(long *)(local_a0 + 0x18) = ((long)puVar3 >> 3) << 1;
              }
              _memcpy(local_a0 + 0x20,puVar11 + uVar6 * 8 + 0x20,uVar1 * 8);
            }
            _swift_bridgeObjectRelease(puVar11);
          }
          if (*(ulong *)(local_a0 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648da0);
            (*pcVar2)();
          }
          puVar11 = local_a0;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar11 & 1) == 0) {
            FUN_1006541a4();
          }
          uVar6 = *(ulong *)(local_a0 + 0x10);
          if (uVar6 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100648da4);
            (*pcVar2)();
          }
          *(ulong *)(local_a0 + lVar12 * 8) = uVar10 & uVar13;
          param_1[3] = (ulong)local_a0;
          if (((uVar10 & uVar13) == 0) && (uVar9 == uVar6 - 1)) {
LAB_100648c6c:
            FUN_100645d2c();
          }
        }
      }
      else if (uVar9 < *(ulong *)(puVar11 + 0x10)) {
        uVar6 = *(ulong *)(puVar11 + lVar12 * 8);
        puVar3 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar3 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar7 = *(ulong *)(puVar11 + 0x10);
        if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100648d78);
          (*pcVar2)();
        }
        *(ulong *)(puVar11 + lVar12 * 8) = uVar6 & uVar13;
        param_1[3] = (ulong)puVar11;
        if ((uVar6 & uVar13) == 0 && uVar9 == uVar7 - 1) goto LAB_100648c6c;
      }
    }
LAB_100648aa8:
    lVar12 = lVar12 + 1;
    if (lVar12 - uVar5 == 4) {
      return;
    }
  } while( true );
}

