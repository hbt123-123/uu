// rea decompile_all
// name: FUN_100561e84
// address: 0x100561e84
// body: available
// range: 0x100561e84-0x10056215f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100561e84(undefined1 *param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar6;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x28);
  bVar1 = *pbVar4;
  if ((bVar1 == 0x27) || (bVar1 == 0x22)) {
    FUN_10055ea1c();
    if (unaff_x21 != 0) {
      return;
    }
    FUN_100006cdc();
    return;
  }
  pbVar6 = *(byte **)(unaff_x20 + 0x30);
  if (bVar1 == 0x5b && pbVar4 != pbVar6) {
    *(byte **)(unaff_x20 + 0x28) = pbVar4 + 1;
    puVar2 = param_1;
    FUN_100560bb8();
    if ((((ulong)param_1 & 1) != 0) && (pbVar4 = *(byte **)(unaff_x20 + 0x28), pbVar4 != pbVar6)) {
      bVar1 = *pbVar4;
      if (bVar1 == 0x5d) {
LAB_100561f30:
        *(byte **)(unaff_x20 + 0x28) = pbVar4 + 1;
        goto LAB_100561f3c;
      }
joined_r0x000100561f54:
      if ((bVar1 == 0x3c) || (bVar1 == 0x7b)) {
        FUN_100562160();
      }
      else {
        puVar2 = (undefined1 *)0x0;
        FUN_100561e84();
      }
      if (unaff_x21 != 0) {
        return;
      }
      pbVar4 = *(byte **)(unaff_x20 + 0x28);
      pbVar6 = *(byte **)(unaff_x20 + 0x30);
      if (pbVar4 != pbVar6) {
        bVar1 = *pbVar4;
        if (bVar1 == 0x5d) goto LAB_100561f30;
        if (bVar1 < 0x24) {
          do {
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar1 != 0x23) break;
              pbVar5 = pbVar4 + 1;
              while (pbVar4 = pbVar6, pbVar5 != pbVar6) {
                pbVar4 = pbVar5 + 1;
                bVar1 = *pbVar5;
                if ((bVar1 == 10) || (pbVar5 = pbVar4, bVar1 == 0xd)) break;
              }
            }
            else {
              pbVar4 = pbVar4 + 1;
            }
            *(byte **)(unaff_x20 + 0x28) = pbVar4;
            if ((pbVar4 == pbVar6) || (bVar1 = *pbVar4, 0x23 < bVar1)) break;
          } while( true );
        }
      }
      if ((pbVar4 != pbVar6) && (*pbVar4 == 0x2c)) {
        do {
          pbVar4 = pbVar4 + 1;
LAB_100562014:
          *(byte **)(unaff_x20 + 0x28) = pbVar4;
          if ((pbVar4 == pbVar6) || (bVar1 = *pbVar4, 0x23 < bVar1)) {
LAB_100562074:
            if (pbVar4 == pbVar6) goto LAB_10056208c;
            bVar1 = *pbVar4;
            goto joined_r0x000100561f54;
          }
        } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
        if ((ulong)bVar1 != 0x23) goto LAB_100562074;
        pbVar5 = pbVar4 + 1;
        while (pbVar4 = pbVar6, pbVar5 != pbVar6) {
          pbVar4 = pbVar5 + 1;
          bVar1 = *pbVar5;
          if ((bVar1 == 10) || (pbVar5 = pbVar4, bVar1 == 0xd)) break;
        }
        goto LAB_100562014;
      }
    }
LAB_10056208c:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar2,0,0);
    *puVar2 = 0;
  }
  else {
    FUN_10055edb4();
    if (unaff_x21 != 0) {
      return;
    }
    if ((param_3 & 1) == 0) {
LAB_100561f3c:
      FUN_100560bb8();
      return;
    }
    FUN_100562438();
    if (((ulong)param_1 & 1) != 0) {
      if (bVar1 == 0x2d) {
        FUN_10055e368();
        return;
      }
      FUN_10055e428();
      return;
    }
    FUN_100561a58();
    if ((param_2 & 1) == 0) {
      return;
    }
    pbVar4 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar4 != pbVar6) && (*pbVar4 == 0x2d)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar4 + 1;
    }
    puVar3 = &DAT_100aaa100;
    FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    _swift_initStaticObject();
    FUN_100561bf0();
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
    FUN_100561c9c();
    if (((ulong)puVar3 >> 0x20 & 1) == 0) {
      return;
    }
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar3,0,0);
    *puVar3 = 1;
  }
  _swift_willThrow();
  return;
}

