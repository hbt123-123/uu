// rea decompile_all
// name: FUN_100648da8
// address: 0x100648da8
// body: available
// range: 0x100648da8-0x100649233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100648da8(ulong *param_1,ulong param_2,ulong param_3,char param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *local_a0;
  
  if (param_4 == '\0') {
    if (param_3 != 0) {
      uVar11 = 2;
      FUN_100646ccc(2);
      goto LAB_100648e38;
    }
    uVar11 = (ulong)(param_2 != 0);
    FUN_100646ccc(uVar11);
  }
  else if (param_4 == '\x01') {
    uVar11 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100649234);
      (*pcVar3)();
    }
    FUN_100646ccc(uVar11);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100648e08);
      (*pcVar3)();
    }
  }
  else {
    FUN_100646ccc(*(undefined8 *)(param_5 + 0x10));
    uVar11 = *(ulong *)(param_5 + 0x10);
  }
  if (uVar11 == 0) {
    return;
  }
LAB_100648e38:
  lVar12 = 4;
  do {
    uVar13 = lVar12 - 4;
    if (param_4 == '\0') {
      uVar6 = param_3;
      if (uVar13 != 1) {
        uVar6 = 0;
      }
      uVar14 = param_2;
      if (uVar13 != 0) {
        uVar14 = uVar6;
      }
    }
    else if (param_4 == '\x01') {
      if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006491e8);
        (*pcVar3)();
      }
      if ((long)uVar13 < (long)(param_3 - param_2)) {
        uVar6 = param_2 + uVar13;
        if (SCARRY8(param_2,uVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649200);
          (*pcVar3)();
        }
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064920c);
          (*pcVar3)();
        }
        if (*(ulong *)(param_5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649214);
          (*pcVar3)();
        }
        uVar14 = *(ulong *)(param_5 + 0x20 + uVar6 * 8);
      }
      else {
LAB_100648f00:
        uVar14 = 0;
      }
    }
    else {
      if (*(long *)(param_5 + 0x10) <= (long)uVar13) goto LAB_100648f00;
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006491f8);
        (*pcVar3)();
      }
      uVar14 = *(ulong *)(param_5 + lVar12 * 8);
    }
    uVar6 = *param_1;
    uVar9 = param_1[1];
    if ((char)param_1[2] == '\0') {
      if (uVar13 == 0) {
        *param_1 = uVar6 ^ uVar14;
      }
      else {
        if (uVar13 != 1) goto LAB_100649040;
        param_1[1] = uVar9 ^ uVar14;
      }
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      puVar8 = (undefined *)param_1[3];
      if ((char)param_1[2] == '\x01') {
        uVar2 = uVar9 - uVar6;
        if (SBORROW8(uVar9,uVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006491ec);
          (*pcVar3)();
        }
        if ((long)uVar2 <= (long)uVar13) {
LAB_100649040:
          if (uVar14 != 0) {
            FUN_100646ccc(lVar12 + -3);
            if ((long)uVar13 < *(long *)(param_1[3] + 0x10)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1006491f0);
              (*pcVar3)();
            }
            lVar1 = (lVar12 - *(long *)(param_1[3] + 0x10)) + -4;
            if (lVar1 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1006491f4);
              (*pcVar3)();
            }
            FUN_10062872c(lVar1,0);
            uVar9 = param_1[3];
            uVar13 = uVar9;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar6 = uVar9;
            if ((uVar13 & 1) == 0) {
              uVar6 = 0;
              FUN_10062958c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
            }
            uVar13 = *(ulong *)(uVar6 + 0x10);
            uVar9 = uVar6;
            if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar13) {
              uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
              FUN_10062958c(uVar9,uVar13 + 1,1,uVar6);
            }
            *(ulong *)(uVar9 + 0x10) = uVar13 + 1;
            *(ulong *)(uVar9 + uVar13 * 8 + 0x20) = uVar14;
            param_1[3] = uVar9;
          }
          goto LAB_100648e70;
        }
        uVar10 = uVar6 + uVar13;
        if (SCARRY8(uVar6,uVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649208);
          (*pcVar3)();
        }
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649210);
          (*pcVar3)();
        }
        if (*(ulong *)(puVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649218);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(puVar8 + uVar10 * 8 + 0x20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = 2;
        if ((long)uVar9 < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064921c);
          (*pcVar3)();
        }
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649220);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(puVar8 + 0x10);
        if ((uVar7 < uVar6) || ((long)uVar7 < (long)uVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649224);
          (*pcVar3)();
        }
        local_a0 = puVar8;
        if (uVar7 != uVar2) {
          local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (uVar9 != uVar6) {
            if (0 < (long)uVar2) {
              local_a0 = &DAT_100ab7e10;
              FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
              _swift_allocObject();
              puVar5 = local_a0;
              _malloc_size();
              puVar4 = puVar5 + -0x19;
              if (0x1f < (long)puVar5) {
                puVar4 = puVar5 + -0x20;
              }
              *(ulong *)(local_a0 + 0x10) = uVar2;
              *(long *)(local_a0 + 0x18) = ((long)puVar4 >> 3) << 1;
            }
            _memcpy(local_a0 + 0x20,puVar8 + uVar6 * 8 + 0x20,uVar2 * 8);
          }
          _swift_bridgeObjectRelease(puVar8);
        }
        if (*(long *)(local_a0 + 0x10) <= (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649228);
          (*pcVar3)();
        }
        puVar8 = local_a0;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar8 & 1) == 0) {
          FUN_1006541a4();
        }
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10064922c);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(local_a0 + 0x10);
        if (uVar6 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649230);
          (*pcVar3)();
        }
        *(ulong *)(local_a0 + lVar12 * 8) = uVar10 ^ uVar14;
        param_1[3] = (ulong)local_a0;
      }
      else {
        if (*(long *)(puVar8 + 0x10) <= (long)uVar13) goto LAB_100649040;
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006491fc);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(puVar8 + lVar12 * 8);
        puVar4 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1006541a4();
        }
        uVar6 = *(ulong *)(puVar8 + 0x10);
        if (uVar6 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100649204);
          (*pcVar3)();
        }
        *(ulong *)(puVar8 + lVar12 * 8) = uVar10 ^ uVar14;
        param_1[3] = (ulong)puVar8;
      }
      if ((uVar10 == uVar14) && (uVar13 == uVar6 - 1)) {
        FUN_100645d2c();
      }
    }
LAB_100648e70:
    lVar12 = lVar12 + 1;
    if (lVar12 - uVar11 == 4) {
      return;
    }
  } while( true );
}

