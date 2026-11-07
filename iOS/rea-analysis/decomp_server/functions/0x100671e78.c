// rea decompile_all
// name: FUN_100671e78
// address: 0x100671e78
// body: available
// range: 0x100671e78-0x10067206b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100671e78(void)

{
  undefined2 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  
  FUN_1006717b8();
  lVar3 = 8;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (8,PTR___ss6UInt16VN_100995d90);
  *(undefined8 *)(lVar3 + 0x10) = 8;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (*(ulong *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067203c);
    (*pcVar2)();
  }
  if (*(ulong *)(lVar5 + 0x10) < 6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672040);
    (*pcVar2)();
  }
  *(ushort *)(lVar3 + 0x2e) = *(ushort *)(lVar5 + 0x36) ^ (ushort)*(undefined4 *)(lVar5 + 0x20);
  if (*(ulong *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672044);
    (*pcVar2)();
  }
  if (*(ulong *)(lVar5 + 0x10) < 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672048);
    (*pcVar2)();
  }
  *(ushort *)(lVar3 + 0x2c) = *(ushort *)(lVar5 + 0x22) ^ (ushort)*(undefined4 *)(lVar5 + 0x2c);
  if (*(ulong *)(lVar5 + 0x10) < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067204c);
    (*pcVar2)();
  }
  if (*(ulong *)(lVar5 + 0x10) < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672050);
    (*pcVar2)();
  }
  *(ushort *)(lVar3 + 0x2a) = *(ushort *)(lVar5 + 0x3e) ^ (ushort)*(undefined4 *)(lVar5 + 0x28);
  if (*(ulong *)(lVar5 + 0x10) < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672054);
    (*pcVar2)();
  }
  if (5 < *(ulong *)(lVar5 + 0x10)) {
    *(ushort *)(lVar3 + 0x28) = *(ushort *)(lVar5 + 0x2a) ^ (ushort)*(undefined4 *)(lVar5 + 0x34);
    if (*(ulong *)(lVar5 + 0x10) < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067205c);
      (*pcVar2)();
    }
    *(ushort *)(lVar3 + 0x26) = *(ushort *)(lVar5 + 0x26) ^ (ushort)*(undefined4 *)(lVar5 + 0x30);
    if (*(ulong *)(lVar5 + 0x10) < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100672060);
      (*pcVar2)();
    }
    if (*(ulong *)(lVar5 + 0x10) < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100672064);
      (*pcVar2)();
    }
    *(ushort *)(lVar3 + 0x24) = *(ushort *)(lVar5 + 0x32) ^ (ushort)*(undefined4 *)(lVar5 + 0x3c);
    if (6 < *(ulong *)(lVar5 + 0x10)) {
      *(ushort *)(lVar3 + 0x22) = *(ushort *)(lVar5 + 0x2e) ^ (ushort)*(undefined4 *)(lVar5 + 0x38);
      if (*(ulong *)(lVar5 + 0x10) < 7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067206c);
        (*pcVar2)();
      }
      *(ushort *)(lVar3 + 0x20) = *(ushort *)(lVar5 + 0x3a) ^ (ushort)*(undefined4 *)(lVar5 + 0x24);
      lVar4 = 0x10;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (0x10,PTR___ss5UInt8VN_100995d40);
      *(undefined8 *)(lVar4 + 0x10) = 0x10;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 != 0) {
        uVar6 = 0;
        do {
          uVar7 = *(ulong *)(lVar4 + 0x10);
          if (uVar7 <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100672034);
            (*pcVar2)();
          }
          uVar1 = *(undefined2 *)(lVar3 + 0x20 + uVar6);
          *(char *)(lVar4 + uVar6 + 0x20) = (char)((ushort)uVar1 >> 8);
          if (uVar7 <= uVar6 + 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100672038);
            (*pcVar2)();
          }
          *(char *)(lVar4 + uVar6 + 0x21) = (char)uVar1;
          uVar6 = uVar6 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      _swift_bridgeObjectRelease(lVar3);
      return lVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100672068);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100672058);
  (*pcVar2)();
}

